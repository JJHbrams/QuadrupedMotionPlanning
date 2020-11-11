#!/usr/bin/env bash
# bag to csv
echo "User Command..."
rostopic echo -b ./bag/Train_data.bag -p /User_Command > ./csv/UserCommand.csv
echo "Base Trajectory..."
rostopic echo -b ./bag/Train_data.bag -p /odom > ./csv/BaseTrajectory.csv
echo "Joint States..."
rostopic echo -b ./bag/Train_data.bag -p /joint_states > ./csv/JointStates.csv
echo "Foot positions..."
rostopic echo -b ./bag/Train_data.bag -p /foot > ./csv/FootPositions.csv
echo "Foot reactions..."
rostopic echo -b ./bag/Train_data.bag -p /foot > ./csv/FootReactions.csv
