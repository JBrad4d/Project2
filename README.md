# Kinematic Model
## Installation and Usage
1 - create a folder called "test" with a subfolder called src
```
	mkdir -p ~/test/src
	cd ~/test/src
```
2 - Download the "a.rosinstall" file into "test/src" from https://github.com/JBrad4d/Project2

3 - Use wstool (in src folder) to clone the repo
```
	wstool init
	wstool merge a.rosinstall
	wstool up
```
4 - Go up a level and build the workspace
```
	cd ~/test
	catkin_make
```
5 - Source the workspace
```
	source devel/setup.bash
```
6 - Using the Controller for this project we used a Logitech F310 Gamepad. Before launching the next step ensure the controller is plugged in and on the right socket, typically this is /js0. This can be changed in the "proj2_quad.launch" file found at "Project2/src/setup_and_launch/turtlebot_launch/launch/" line 34. Iterate through js1, js2, ... until the controller is found.

7 - Run the simulation
```
	roslaunch turtlebot_launch proj2_quad.launch
```
8 - Move the quadrotor with the left joystick. An input from the joystick will apply an acceleration and the model will maintain any velocity when the stick is released.

## Model Changes

We changed the scaling of our urdf file because it seemed big. Now it is an actual size scaling rather than a four times scale. This caused a shift in the joint origins by a factor of one fourth. This did not change any other critical elements of our model. 

## Kinematic Model 

For this model we used a "BetterUnicycle" model. This model receives acceleration inputs to control movement.
