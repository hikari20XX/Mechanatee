pub mod compass_heading;
pub mod imu_data;
pub mod magnetometer_data;
pub mod pressure_data;

// Re-export the structs from the modules for easier access
pub use compass_heading::CompassHeading;
pub use imu_data::ImuData;
pub use magnetometer_data::MagnetometerData;
pub use pressure_data::PressureData;
