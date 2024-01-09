from setuptools import setup, find_packages

package_name = 'can_bridge'

setup(
    name=package_name,
    version='0.1.0',
    packages=find_packages(),
    install_requires=['setuptools'],
    zip_safe=True,
    author='Your Name',
    author_email='your_email@example.com',
    maintainer='Your Name',
    maintainer_email='your_email@example.com',
    keywords=['ROS'],
    classifiers=[
        'Intended Audience :: Developers',
        'License :: OSI Approved :: MIT License',
        'Programming Language :: Python',
        'Programming Language :: Python :: 3',
        'Topic :: Software Development',
    ],
    description='ROS2 package for bridging ROS2 and the CAN bus.',
    license='MIT License',
    tests_require=['pytest'],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    entry_points={
        'console_scripts': [
            'ros2can_bridge = can_bridge.ros2can_bridge:main',
            'motor_control_topic = can_bridge.motor_control_topic:main',
            'pid_controller = can_bridge.pid_controller:main',
            'analog_input_topic = can_bridge.analog_input_topic:main',
            'parameter_tuner = can_bridge.parameter_tuner:main',
        ],
    },
)
