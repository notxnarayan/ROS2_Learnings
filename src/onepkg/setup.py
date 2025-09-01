from setuptools import find_packages, setup

package_name = 'onepkg'

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
    maintainer_email='narayan@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "firstnode = onepkg.first_node:main",
            "transnode = onepkg.topic_test:main",
            "smphnode = onepkg.smartphone:main",
            "server = onepkg.server_test:main",
            "client = onepkg.server_client:main",
            "interface_test = onepkg.interface_test:main",
        ],
    },
)
