%% Parameters

drone_mass = 0.027;
optitrack_frame_mass = 0.04;
m = drone_mass + optitrack_frame_mass; % drone mass in the center of gravity of the drone


L = 0.0475; % length of each arm of the quadrotor frame, i.e. the distance of themotors from the CoG
% aerodynamic coefficient necessary to compute the lift of the propellers 
k = 2.165856918e-8; % kg*m
b = 0.11; %aerodynamic coefficient necessary to compute the drag torque of the propellers

Ixx = 2.3951e-5;
Iyy = 2.3951e-5;
Izz = 3.2347e-5;

% Moment of inertia matrix of the UAV
I = diag([Ixx, Iyy, Izz]);

% Gravitational action along the z axis
g = 9.80665;
mg = [0; 0; m * g];


motor_max_rpm = 24000;





