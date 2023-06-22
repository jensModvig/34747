clear; clc; close all 

% Run simulink to get drone and hoops position 
poses = sim("hoop_pose_2021.slx", 100);
uas_parameters;

initial_drone_pose = [poses.Drone.Pose.Position.X(end);...
                      poses.Drone.Pose.Position.Y(end);...
                      poses.Drone.Pose.Position.Z(end)];
% Initialize array for storing hoop positions
hoop_pose = [];

% Hoop 1
temp_pos = [poses.Hoop1.X.data(end);...
            poses.Hoop1.Y.data(end);...
            poses.Hoop1.Z.data(end)];
%rotation_matrix = quat2rotm([x_q(1), y_q(1) z_q(1) w_q(1)]);

%hoop_pose = [hoop_pose, rotation_matrix*temp_pos];
hoop_pose = [hoop_pose, temp_pos];

% Hoop 2
temp_pos = [poses.Hoop2.X.data(end);...
            poses.Hoop2.Y.data(end);...
            poses.Hoop2.Z.data(end)];
%rotation_matrix = quat2rotm([x_q(2), y_q(2) z_q(2) w_q(2)]);

hoop_pose = [hoop_pose, temp_pos];

% Hoop 3
temp_pos = [poses.Hoop3.X.data(end);...
            poses.Hoop3.Y.data(end);...
            poses.Hoop3.Z.data(end)];
%rotation_matrix = quat2rotm([x_q(3), y_q(3) z_q(3) w_q(3)]);

hoop_pose = [hoop_pose, temp_pos];

% Hoop 4
temp_pos = [poses.Hoop4.X.data(end);...
            poses.Hoop4.Y.data(end);...
            poses.Hoop4.Z.data(end)];
%rotation_matrix = quat2rotm([x_q(4), y_q(4) z_q(4) w_q(4)]);

hoop_pose = [hoop_pose, temp_pos];

% Extract x, y and z
x = hoop_pose(1,:);
y = hoop_pose(2,:);
z = hoop_pose(3,:);


% Center of hoops
center = sum(hoop_pose,2) / 2;
dist = 0;
for i = 1:4
    dist = dist + norm(center(1:2) - hoop_pose(1:2,i));
end
dist = dist / 4;
corner12 = [(hoop_pose(1,1) + hoop_pose(1,2))/2 , ...
            (hoop_pose(2,1) + hoop_pose(2,2))/2, ...
            mean([hoop_pose(3,1), hoop_pose(3,2)])];
corner23 = [(hoop_pose(1,2) + hoop_pose(1,3))/2 , ...
            (hoop_pose(2,2) + hoop_pose(2,3))/2, ...
            mean([hoop_pose(3,2), hoop_pose(3,3)])];
corner34 = [(hoop_pose(1,3) + hoop_pose(1,4))/2 , ...
            (hoop_pose(2,3) + hoop_pose(2,4))/2, ...
            mean([hoop_pose(3,3), hoop_pose(3,4)])];
corner41 = [(hoop_pose(1,4) + hoop_pose(1,1))/2 , ...
            (hoop_pose(2,4) + hoop_pose(2,1))/2, ...
            mean([hoop_pose(3,4), hoop_pose(3,1)])];

% Diameter of the hoops
diameter = 0.01;
r = diameter / 2;
        
% Trajectory generation
% TODO: What should the knots be? 
knots = [0 50];
waypoints = cell(1,2);
% TODO: How may waypoints do we need and what should they be?
waypoints{1} = corner41';
waypoints{2} = corner41';
order = 13;
delta_t = 5;

% TODO add error term for the position
start_time = 15;
corridors.times = [0 1 2 3 4 5 6] * delta_t + start_time;
offset = 0.35;
z_offset = 0.07;

corridors.x_lower = [x(1)-r, corner12(1)-offset, x(2)-r, corner23(1)- offset, x(3)-r, corner34(1)-offset, x(4)-r];
corridors.x_upper = [x(1)+r, corner12(1)+offset, x(2)+r, corner23(1)+offset, x(3)+r, corner34(1)+offset, x(4)+r];
corridors.y_lower = [y(1)-r, corner12(2)-offset, y(2)-r, corner23(2)-offset, y(3)-r, corner34(2)-offset, y(4)-r];
corridors.y_upper = [y(1)+r, corner12(2)+offset, y(2)+r, corner23(2)+offset, y(3)+r, corner34(2)+offset, y(4)+r];
corridors.z_lower = [z(1)-r, corner12(3)-offset, z(2)-r, corner23(3)-offset, z(3)-r, corner34(3)-offset, z(4)-r] + z_offset;
corridors.z_upper = [z(1)+r, corner12(3)+offset, z(2)+r, corner23(3)+offset, z(4)+r, corner34(3)+offset, z(4)+r] - z_offset;

%corridors.x_lower = flip(corridors.x_lower);
%corridors.x_upper = flip(corridors.x_upper);
%corridors.y_lower = flip(corridors.y_lower);
%corridors.y_upper = flip(corridors.y_upper);
%corridors.z_lower = flip(corridors.z_lower);
%corridors.z_upper = flip(corridors.z_upper);

make_plots = true;

disp("poses are");
disp(hoop_pose);
pause(2)

while 1
    close all;
    poly_traj = uas_minimum_snap(knots, order, waypoints, corridors, make_plots);
    if poly_traj.isSolved == 1
      break;
    end
end



