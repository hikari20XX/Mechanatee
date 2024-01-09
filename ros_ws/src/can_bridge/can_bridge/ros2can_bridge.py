import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from custom_msgs.msg import ServoFeedback, ServoStatus, PIDParams, BatteryStatus, ServoSpeed, TargetPosition, SystemLogs

class Ros2CanBridge(Node):
    def __init__(self):
        super().__init__('ros2can_bridge')
        self.ros2_to_can_sub = self.create_subscription(
            ServoFeedback,
            'ros2_to_can',
            self.ros2_to_can_callback,
            10
        )
        self.servo_voltage_feedback_sub = self.create_subscription(
            ServoFeedback,
            'servo_voltage_feedback',
            self.servo_voltage_feedback_callback,
            10
        )
        self.servo_status_pub = self.create_publisher(ServoStatus, 'servo_status', 10)
        self.system_health_pub = self.create_publisher(String, 'system_health', 10)
        self.servo_speed_pub = self.create_publisher(ServoSpeed, 'servo_speed', 10)
        self.system_logs_pub = self.create_publisher(SystemLogs, 'system_logs', 10)
        self.target_position_pub = self.create_publisher(TargetPosition, 'target_position', 10)
        self.pid_params_pub = self.create_publisher(PIDParams, 'pid_params', 10)
        self.battery_status_pub = self.create_publisher(BatteryStatus, 'battery_status', 10)

    def ros2_to_can_callback(self, msg):
        # Process the received ROS2 message from ros2_to_can topic
        # and translate it into CAN messages to control the servo motors

        # Publish servo status
        servo_status_msg = ServoStatus()
        servo_status_msg.status = "MOVING"
        self.servo_status_pub.publish(servo_status_msg)

        # Publish system health
        system_health_msg = String()
        system_health_msg.data = "OK"
        self.system_health_pub.publish(system_health_msg)

        # Publish servo speed
        servo_speed_msg = ServoSpeed()
        servo_speed_msg.speed = 50.0
        self.servo_speed_pub.publish(servo_speed_msg)

        # Publish system logs
        system_logs_msg = SystemLogs()
        system_logs_msg.log_message = "Servo position updated"
        self.system_logs_pub.publish(system_logs_msg)

    def servo_voltage_feedback_callback(self, msg):
        # Process the received ROS2 message from servo_voltage_feedback topic
        # and translate it into CAN messages for voltage feedback

        # Publish target position
        target_position_msg = TargetPosition()
        target_position_msg.position = 100
        self.target_position_pub.publish(target_position_msg)

        # Publish PID parameters
        pid_params_msg = PIDParams()
        pid_params_msg.Kp = 1.0
        pid_params_msg.Ki = 0.5
        pid_params_msg.Kd = 0.2
        self.pid_params_pub.publish(pid_params_msg)

        # Publish battery status
        battery_status_msg = BatteryStatus()
        battery_status_msg.voltage = 12.5
        battery_status_msg.percentage = 80.0
        self.battery_status_pub.publish(battery_status_msg)


def main(args=None):
    rclpy.init(args=args)
    ros2can_bridge = Ros2CanBridge()
    rclpy.spin(ros2can_bridge)
    ros2can_bridge.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
