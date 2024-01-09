from setuptools import find_packages
from setuptools import setup

setup(
    name='rosidl_generator_rs',
    version='0.3.1',
    packages=find_packages(
        include=('rosidl_generator_rs', 'rosidl_generator_rs.*')),
)
