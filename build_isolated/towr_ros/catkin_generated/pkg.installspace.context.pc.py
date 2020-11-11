# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include;/opt/ros/melodic/include;/usr/include/eigen3".split(';') if "${prefix}/include;/opt/ros/melodic/include;/usr/include/eigen3" != "" else []
PROJECT_CATKIN_DEPENDS = "xpp_states;roscpp".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-ltowr_ros;/opt/ros/melodic/lib/libtowr.so;/opt/ros/melodic/lib/libifopt_core.so;/opt/ros/melodic/lib/libifopt_ipopt.so".split(';') if "-ltowr_ros;/opt/ros/melodic/lib/libtowr.so;/opt/ros/melodic/lib/libifopt_core.so;/opt/ros/melodic/lib/libifopt_ipopt.so" != "" else []
PROJECT_NAME = "towr_ros"
PROJECT_SPACE_DIR = "/home/mrjohd/Quadrupeds_ws/install_isolated"
PROJECT_VERSION = "1.4.1"
