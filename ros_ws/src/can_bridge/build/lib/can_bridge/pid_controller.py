import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32
from custom_msgs.msg import PWMCommand, PIDParameters

class PIDController(Node):
    def __init__(self):
        super().__init__('pid_controller')
        self.declare_parameters(
            namespace='',
            parameters=[
                ('kp', 0.0),
                ('ki', 0.0),
                ('kd', 0.0),
                ('integral_limit', 0.0)
            ]
        )
        self.setpoint = None
        self.feedback = None
        self.control_output = None
        self.error_value = None
        self.pid_status = None
        self.integral_accumulated_value = 0.0

        self.subscription_setpoint = self.create_subscription(
            Float32,
            'setpoint_topic',
            self.setpoint_callback,
            10
        )
        self.subscription_feedback = self.create_subscription(
            Float32,
            'feedback_topic',
            self.feedback_callback,
            10
        )
        self.subscription_pid_parameters = self.create_subscription(
            PIDParameters,
            'pid_parameters_topic',
            self.pid_parameters_callback,
            10
        )
        self.subscription_pwm_command = self.create_subscription(
            PWMCommand,
            'pwm_command_topic',
            self.pwm_command_callback,
            10
        )

        self.publisher_control_output = self.create_publisher(
            PWMCommand,
            'control_output_topic',
            10
        )
        self.publisher_error_value = self.create_publisher(
            Float32,
            'pid_errors_topic',
            10
        )
        self.publisher_pid_status = self.create_publisher(
            Float32,
            'controller_state_topic',
            10
        )

    def setpoint_callback(self, msg):
        self.setpoint = msg.data

    def feedback_callback(self, msg):
        self.feedback = msg.data

    def pid_parameters_callback(self, msg):
        self.get_logger().info('Received PID parameters: kp={}, ki={}, kd={}, integral_limit={}'.format(
            msg.kp, msg.ki, msg.kd, msg.integral_limit))
        self.declare_parameter('kp', msg.kp)
        self.declare_parameter('ki', msg.ki)
        self.declare_parameter('kd', msg.kd)
        self.declare_parameter('integral_limit', msg.integral_limit)

    def pwm_command_callback(self, msg):
        self.control_output = msg

    def calculate_control_output(self):
        if self.setpoint is None or self.feedback is None or self.control_output is None:
            return

        kp = self.get_parameter('kp').value
        ki = self.get_parameter('ki').value
        kd = self.get_parameter('kd').value
        integral_limit = self.get_parameter('integral_limit').value

        error = self.setpoint - self.feedback
        self.error_value = error.data

        proportional_term = kp * error
        integral_term = ki * (self.integral_accumulated_value + error)
        derivative_term = kd * (error - self.error_value)

        control_output_value = proportional_term + integral_term + derivative_term

        if control_output_value > 1.0:
            control_output_value = 1.0
        elif control_output_value < -1.0:
            control_output_value = -1.0

        self.control_output.value = control_output_value
        self.publisher_control_output.publish(self.control_output)

    def publish_error_value(self):
        if self.error_value is not None:
            error_msg = Float32()
            error_msg.data = self.error_value
            self.publisher_error_value.publish(error_msg)

    def publish_pid_status(self):
        if self.control_output is not None:
            pid_status_msg = Float32()
            pid_status_msg.data = self.control_output.value
            self.publisher_pid_status.publish(pid_status_msg)

    def timer_callback(self):
        self.calculate_control_output()
        self.publish_error_value()
        self.publish_pid_status()

def main(args=None):
    rclpy.init(args=args)
    pid_controller = PIDController()
    rclpy.spin(pid_controller)
    pid_controller.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
