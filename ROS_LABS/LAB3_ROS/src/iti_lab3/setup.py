from setuptools import setup
import os
from glob import glob

package_name = 'iti_lab3'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name), glob('launch/*.launch.py')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='ali',
    maintainer_email='ali.h.eljaffaary@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
        "publisher_node=iti_lab3.publisher_node:main",
        "receiver_node=iti_lab3.receiver_node:main",
        "reset_node=iti_lab3.reset_node:main",
        ],
    },
)
