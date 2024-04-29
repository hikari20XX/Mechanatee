#!/usr/bin/env bash

# Set the script to exit on the first error encountered
set -e

# Define a cleanup function to remove temporary files and handle errors
cleanup() {
    echo "Cleaning up..."
    rm -f /tmp/spi0-led.dts
    echo "Exiting due to error."
}

# Trap errors and call cleanup function
trap cleanup ERR

echo "Configuring the system for Navigator board usage..."

# Paths to the boot configuration files
CMDLINE_FILE="/boot/cmdline.txt"
CONFIG_FILE="/boot/config.txt"

# Ensure the SPI, I2C, and UART are enabled
echo "Enabling SPI, I2C, and UART interfaces..."
sudo sed -i "/dtparam=spi=/d" "$CONFIG_FILE"
sudo sed -i "/dtoverlay=spi/d" "$CONFIG_FILE"
sudo sed -i "/dtparam=i2c_arm=/d" "$CONFIG_FILE"
sudo sed -i "/dtoverlay=i2c/d" "$CONFIG_FILE"
sudo sed -i "/enable_uart=/d" "$CONFIG_FILE"
echo "dtparam=spi=on" | sudo tee -a "$CONFIG_FILE"
echo "dtparam=i2c_arm=on" | sudo tee -a "$CONFIG_FILE"
echo "enable_uart=1" | sudo tee -a "$CONFIG_FILE"

# Check if dtc is installed
if ! command -v dtc &> /dev/null; then
    echo "Device Tree Compiler (dtc) could not be found, please install it."
    exit 1
fi

# Write the custom DTS for the Neopixel LED control
DTS_CONTENT='
/dts-v1/;
/plugin/;

/ {
    compatible = "brcm,bcm2835";

    fragment@0 {
        target = <&spi0_cs_pins>;
        frag0: __overlay__ {
            brcm,pins = <>;
        };
    };

    fragment@1 {
        target = <&spi0>;
        frag1: __overlay__ {
            cs-gpios = <>;
            status = "okay";
        };
    };

    fragment@2 {
        target = <&spidev1>;
        __overlay__ {
            status = "disabled";
        };
    };

    fragment@3 {
        target = <&spi0_pins>;
        __overlay__ {
            brcm,pins = <10>;
        };
    };
};
'

# Write the DTS content to a temporary file
echo "$DTS_CONTENT" > /tmp/spi0-led.dts

# Compile the DTS file to a DTBO
echo "Compiling the device tree overlay..."
dtc -@ -I dts -O dtb -o /boot/overlays/spi0-led.dtbo /tmp/spi0-led.dts

# Remove any console serial configuration to free up UART
echo "Configuring serial ports..."
sudo sed -i "s/console=serial[0-9],[0-9]* //" "$CMDLINE_FILE"

# Reboot to apply changes
echo "Configuration complete. A reboot is required to apply changes."
echo "Reboot now? (yes/no)"
read response
if [[ "$response" =~ ^[Yy]es$ ]]; then
    echo "Rebooting..."
    sudo reboot
else
    echo "Please reboot the system manually to apply changes."
fi
