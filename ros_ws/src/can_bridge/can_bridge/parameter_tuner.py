import rclpy
from rclpy.node import Node
from my_robot_msgs.msg import SystemFeedback, PIDParams, UpdatedPIDParams, TuningStatus


class ParameterTuner(Node):
    def __init__(self):
        super().__init__('parameter_tuner')
        self.declare_parameters(
            namespace='',
            parameters=[
                ('initial_kp', 0.0),
                ('initial_ki', 0.0),
                ('initial_kd', 0.0),
            ]
        )
        self.get_logger().info('Parameter Tuner node initialized')
        self.subscription = self.create_subscription(
            SystemFeedback,
            'system_feedback_topic',
            self.system_feedback_callback,
            10
        )
        self.subscription  # prevent unused variable warning
        self.current_pid_params_subscription = self.create_subscription(
            PIDParams,
            'current_pid_parameters_topic',
            self.current_pid_params_callback,
            10
        )
        self.current_pid_params_subscription  # prevent unused variable warning
        self.updated_pid_params_publisher = self.create_publisher(
            UpdatedPIDParams,
            'updated_pid_parameters_topic',
            10
        )
        self.tuning_status_publisher = self.create_publisher(
            TuningStatus,
            'tuning_status_topic',
            10
        )
        self.timer = self.create_timer(1.0, self.timer_callback)
        self.kp = self.get_parameter('initial_kp').value
        self.ki = self.get_parameter('initial_ki').value
        self.kd = self.get_parameter('initial_kd').value

    def system_feedback_callback(self, msg):
        # Process system feedback and update PID parameters if necessary
        updated_params = PIDParams()
        updated_params.kp = self.kp
        updated_params.ki = self.ki
        updated_params.kd = self.kd
        self.updated_pid_params_publisher.publish(updated_params)

    def current_pid_params_callback(self, msg):
        # Update current PID parameters
        self.kp = msg.kp
        self.ki = msg.ki
        self.kd = msg.kd

    def timer_callback(self):
        # Check tuning status and publish it
        tuning_status = TuningStatus()
        tuning_status.status = TuningStatus.NOT_STARTED
        self.tuning_status_publisher.publish(tuning_status)


def main(args=None):
    rclpy.init(args=args)
    parameter_tuner = ParameterTuner()
    rclpy.spin(parameter_tuner)
    parameter_tuner.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
