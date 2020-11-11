#!/usr/bin/env bash
# Record bag file
cd ./bag
rosbag record -O Train_data.bag /User_Command /odom /joint_states /foot /foot_contacts
echo "rosbag..."
