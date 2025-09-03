from setuptools import find_packages, setup

package_name = 'turtle_sim'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='narayan',
    maintainer_email='fornarayans@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "spawner = turtle_sim.spawner:main",
            "server = turtle_sim.head_server:main",
            "turtle = turtle_sim.turtle1:main",
        ],
    },
)
