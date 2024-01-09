import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64, Bool, Int32
from custom_msgs.msg import PWMCommand, MotorStatus, MotorFeedback, MotorAlerts


class MotorControlTopic(Node):
    def __init__(self):
        super().__init__('motor_control_topic')
        self.subscription = self.create_subscription(
            PWMCommand,
            'ros2can_bridge_topic',
            self.pwm_command_callback,
            10
        )
        self.publisher = self.create_publisher(
            MotorStatus,
            'motor_control_topic',
            10
        )
        self.current_position_publisher = self.create_publisher(
            Float64,
            'current_position',
            10
        )
        self.current_speed_publisher = self.create_publisher(
            Float64,
            'current_speed',
            10
        )
        self.motor_feedback_publisher = self.create_publisher(
            MotorFeedback,
            'motor_feedback',
            10
        )
        self.motor_alerts_publisher = self.create_publisher(
            MotorAlerts,
            'motor_alerts',
            10
        )

    def pwm_command_callback(self, msg):
        # Extract the PWM command values from the received message
        target_position = msg.target_position
        target_speed = msg.target_speed
        enable = msg.enable
        reset = msg.reset
        mode = msg.mode

        # Perform the necessary motor control operations based on the received command values

        # Publish the motor status message
        motor_status_msg = MotorStatus()
        motor_status_msg.motor_status = 1  # Ready status
        self.publisher.publish(motor_status_msg)

        # Publish the current position and speed messages
        current_position_msg = Float64()
        current_position_msg.data = 0.0  # Replace with actual current position value
        self.current_position_publisher.publish(current_position_msg)

        current_speed_msg = Float64()
        current_speed_msg.data = 0.0  # Replace with actual current speed value
        self.current_speed_publisher.publish(current_speed_msg)

        # Publish the motor feedback message
        motor_feedback_msg = MotorFeedback()
        motor_feedback_msg.current_position = current_position_msg.data
        motor_feedback_msg.current_speed = current_speed_msg.data
        motor_feedback_msg.current_draw = 0.0  # Replace with actual current draw value
        motor_feedback_msg.voltage = 0.0  # Replace with actual voltage value
        motor_feedback_msg.error_code = 0  # Replace with actual error code value
        self.motor_feedback_publisher.publish(motor_feedback_msg)

        # Publish the motor alerts message
        motor_alerts_msg = MotorAlerts()
        motor_alerts_msg.stall_alert = False  # Replace with actual stall alert value
        motor_alerts_msg.low_voltage_alert = False  # Replace with actual low voltage alert value
        motor_alerts_msg.high_voltage_alert = False  # Replace with actual high voltage alert value
        motor_alerts_msg.out_of_range_alert = False  # Replace with actual out of range alert value
        motor_alerts_msg.lost_communication_alert = False  # Replace with actual lost communication alert value
        motor_alerts_msg.internal_error_alert = 0  # Replace with actual internal error alert value
        motor_alerts_msg.speed_deviation_alert = False  # Replace with actual speed deviation alert value
        self.motor_alerts_publisher.publish(motor_alerts_msg)


def main(args=None):
    rclpy.init(args=args)
    node = MotorControlTopic()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == '__main__':
    main()
