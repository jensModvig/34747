%% clear
clear
close all
clc

%% Initialize parameters and route

load('wall.txt');

x_scale = 0.6;
y_scale = 0.52;
z_scale = 0.73;

x_offset = 0.3;
y_offset = 0.5;
z_offset = 0.25;

start_letter = "G";
end_letter = "A";

route = find_route_3d(wall, start_letter, end_letter, x_scale, y_scale, z_scale, x_offset, y_offset, z_offset);

%% Estimate trajectory
controlpoints = route';



% start and end time for the trajectory
start_time = 0;
end_time = 10;
tInterval = [start_time end_time];

tSamples = start_time:0.01:end_time;

[q, qd, qdd, pp] = bsplinepolytraj(controlpoints, tInterval, tSamples);

%% Plot trajectory
figure
plot3(controlpoints(1,:), controlpoints(2,:), controlpoints(3,:), 'xb-')
hold on
plot3(q(1,:), q(2,:), q(3,:))
grid on
xlabel("X")
ylabel("Y")
zlabel("Z")
hold off



