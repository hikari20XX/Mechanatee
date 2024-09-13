use rclrs::{Context, Node, Publisher};
use std::sync::{Arc, Mutex};
use std::error::Error;
use std::thread;
use std::time::Duration;
use ros2navigator_bridge_msgs::{compass_heading::CompassHeading, imu_data::ImuData, magnetometer_data::MagnetometerData, pressure_data::PressureData};
use navigator_rs::Navigator;

fn main() -> Result<(), Box<dyn Error>> {
    // Initialize the ROS 2 context and node
    let context = Context::new(std::env::args())?;
    let node = Arc::new(Node::new(&context, "ros2navigator_bridge")?);

    // Create publishers for each sensor
    let compass_publisher = node.create_publisher::<CompassHeading>("compass_heading", rclrs::QOS_PROFILE_DEFAULT)?;
    let imu_publisher = node.create_publisher::<ImuData>("imu_data", rclrs::QOS_PROFILE_DEFAULT)?;
    let magnetometer_publisher = node.create_publisher::<MagnetometerData>("magnetometer_data", rclrs::QOS_PROFILE_DEFAULT)?;
    let pressure_publisher = node.create_publisher::<PressureData>("pressure_data", rclrs::QOS_PROFILE_DEFAULT)?;

    // Wrap the publishers in Arc<Mutex<>>
    let compass_publisher = Arc::new(Mutex::new(compass_publisher));
    let imu_publisher = Arc::new(Mutex::new(imu_publisher));
    let magnetometer_publisher = Arc::new(Mutex::new(magnetometer_publisher));
    let pressure_publisher = Arc::new(Mutex::new(pressure_publisher));

    // Wrap the navigator in Arc<Mutex<>> for thread-safe sharing
    let navigator = Arc::new(Mutex::new(Navigator::new()));
    navigator.lock().unwrap().init();

    // Clone publishers and navigator for use in threads
    let compass_publisher_clone = Arc::clone(&compass_publisher);
    let imu_publisher_clone = Arc::clone(&imu_publisher);
    let magnetometer_publisher_clone = Arc::clone(&magnetometer_publisher);
    let pressure_publisher_clone = Arc::clone(&pressure_publisher);
    let navigator_clone = Arc::clone(&navigator);

    // Compass publishing thread
    let compass_thread = {
        let compass_publisher_clone = Arc::clone(&compass_publisher_clone);
        let navigator_clone = Arc::clone(&navigator_clone);
        thread::spawn(move || {
            loop {
                let compass_data = navigator_clone.lock().unwrap().read_mag(); // Reading compass data
                let compass_msg = CompassHeading { degrees: compass_data.x };

                if let Err(e) = compass_publisher_clone.lock().unwrap().publish(&compass_msg) {
                    eprintln!("Failed to publish compass data: {}", e);
                }

                thread::sleep(Duration::from_millis(500));
            }
        })
    };

    // IMU publishing thread
    let imu_thread = {
        let imu_publisher_clone = Arc::clone(&imu_publisher_clone);
        let navigator_clone = Arc::clone(&navigator_clone);
        thread::spawn(move || {
            loop {
                let imu_data = navigator_clone.lock().unwrap().read_accel(); // Reading IMU data
                let imu_msg = ImuData {
                    accel_x: imu_data.x,
                    accel_y: imu_data.y,
                    accel_z: imu_data.z,
                    gyro_x: 0.0, // Set proper gyro values if applicable
                    gyro_y: 0.0,
                    gyro_z: 0.0,
                };

                if let Err(e) = imu_publisher_clone.lock().unwrap().publish(&imu_msg) {
                    eprintln!("Failed to publish IMU data: {}", e);
                }

                thread::sleep(Duration::from_millis(500));
            }
        })
    };

    // Magnetometer publishing thread
    let magnetometer_thread = {
        let magnetometer_publisher_clone = Arc::clone(&magnetometer_publisher_clone);
        let navigator_clone = Arc::clone(&navigator_clone);
        thread::spawn(move || {
            loop {
                let magnetometer_data = navigator_clone.lock().unwrap().read_mag(); // Reading magnetometer data
                let magnetometer_msg = MagnetometerData {
                    x: magnetometer_data.x,
                    y: magnetometer_data.y,
                    z: magnetometer_data.z,
                };

                if let Err(e) = magnetometer_publisher_clone.lock().unwrap().publish(&magnetometer_msg) {
                    eprintln!("Failed to publish magnetometer data: {}", e);
                }

                thread::sleep(Duration::from_millis(500));
            }
        })
    };

    // Pressure publishing thread
    let pressure_thread = {
        let pressure_publisher_clone = Arc::clone(&pressure_publisher_clone);
        let navigator_clone = Arc::clone(&navigator_clone);
        thread::spawn(move || {
            loop {
                let pressure_value = navigator_clone.lock().unwrap().read_pressure(); // Reading pressure data
                let pressure_msg = PressureData { kpa: pressure_value };

                if let Err(e) = pressure_publisher_clone.lock().unwrap().publish(&pressure_msg) {
                    eprintln!("Failed to publish pressure data: {}", e);
                }

                thread::sleep(Duration::from_millis(500));
            }
        })
    };

    // Wait for threads to finish (in practice, this won't happen)
    compass_thread.join().unwrap();
    imu_thread.join().unwrap();
    magnetometer_thread.join().unwrap();
    pressure_thread.join().unwrap();

    Ok(())
}
