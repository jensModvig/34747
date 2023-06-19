clear all

% Run simulink to get drone and hoops position 
poses = sim("poses", 10);

initial_drone_pose = [mean(poses.Drone.Pose.Position.X);...
                      mean(poses.Drone.Pose.Position.Y);...
                      mean(poses.Drone.Pose.Position.Z)];
% Initialize array for storing hoop positions
hoop_pose = [];

% Hoop 1
%x = [mean(poses.Hoop1.Pose.Position.X.data)];
%y = [mean(poses.Hoop1.Pose.Position.Y.data)];
%z = [mean(poses.Hoop1.Pose.Position.Z.data)];

x_q = [mean(poses.Hoop1.Pose.Orientation.X.data)];
y_q = [mean(poses.Hoop1.Pose.Orientation.Y.data)];
z_q = [mean(poses.Hoop1.Pose.Orientation.Z.data)];
w_q = [mean(poses.Hoop1.Pose.Orientation.W.data)];

temp_pos = [mean(poses.Hoop1.Pose.Position.X.data);...
            mean(poses.Hoop1.Pose.Position.Y.data);...
            mean(poses.Hoop1.Pose.Position.Z.data)];
rotation_matrix = quat2rotm([x_q(1), y_q(1) z_q(1) w_q(1)]);

hoop_pose = [hoop_pose, rotation_matrix*temp_pos];

% Hoop 2
x_q = [x_q, mean(poses.Hoop2.Pose.Orientation.X.data)];
y_q = [y_q, mean(poses.Hoop2.Pose.Orientation.Y.data)];
z_q = [z_q, mean(poses.Hoop2.Pose.Orientation.Z.data)];
w_q = [w_q, mean(poses.Hoop2.Pose.Orientation.W.data)];

temp_pos = [mean(poses.Hoop2.Pose.Position.X.data);...
            mean(poses.Hoop2.Pose.Position.Y.data);...
            mean(poses.Hoop2.Pose.Position.Z.data)];
rotation_matrix = quat2rotm([x_q(2), y_q(2) z_q(2) w_q(2)]);

hoop_pose = [hoop_pose, rotation_matrix*temp_pos];

% Hoop 3
x_q = [x_q, mean(poses.Hoop3.Pose.Orientation.X.data)];
y_q = [y_q, mean(poses.Hoop3.Pose.Orientation.Y.data)];
z_q = [z_q, mean(poses.Hoop3.Pose.Orientation.Z.data)];
w_q = [w_q, mean(poses.Hoop3.Pose.Orientation.W.data)];

temp_pos = [mean(poses.Hoop3.Pose.Position.X.data);...
            mean(poses.Hoop3.Pose.Position.Y.data);...
            mean(poses.Hoop3.Pose.Position.Z.data)];
rotation_matrix = quat2rotm([x_q(3), y_q(3) z_q(3) w_q(3)]);

hoop_pose = [hoop_pose, rotation_matrix*temp_pos];

% Hoop 4
x_q = [x_q, mean(poses.Hoop4.Pose.Orientation.X.data)];
y_q = [y_q, mean(poses.Hoop4.Pose.Orientation.Y.data)];
z_q = [z_q, mean(poses.Hoop4.Pose.Orientation.Z.data)];
w_q = [w_q, mean(poses.Hoop4.Pose.Orientation.W.data)];

temp_pos = [mean(poses.Hoop4.Pose.Position.X.data);...
            mean(poses.Hoop4.Pose.Position.Y.data);...
            mean(poses.Hoop4.Pose.Position.Z.data)];
rotation_matrix = quat2rotm([x_q(4), y_q(4) z_q(4) w_q(4)]);

hoop_pose = [hoop_pose, rotation_matrix*temp_pos];

% Extract x, y and z
x = hoop_pose(1,:);
y = hoop_pose(2,:);
z = hoop_pose(3,:);

% Diameter of the hoops
diameter = 0.20;
r = diameter / 2;

% Find the circle that the three hoops create
%p1 = [x(1) y(1) z(1)];
%p2 = [x(2) y(2) z(2)];
%p3 = [x(3) y(3) z(3)];
%[center,rad,v1n,v2nb] = circlefit3d(p1, p2, p3);

% Trajectory generation
% knots = [0 5];
knots = [min(x) max(x)];
waypoints = cell(1,2);
waypoints{1} = initial_drone_pose;
waypoints{2} = initial_drone_pose;
order = 7;
delta_t = 2;

% TODO add error term for the position
corridors.times = [1 2 3 4 5 6] * delta_t;
corridors.x_lower = [x(1)-r, x(2)-r, x(3)-r, x(4)-r];
corridors.x_upper = [x(1)+r, x(2)+r, x(3)+r, x(4)+r];
corridors.y_lower = [y(1)-r, y(2)-r, y(3)-r, y(4)-r];
corridors.y_upper = [y(1)+r, y(2)+r, y(3)+r, y(4)+r];
corridors.z_lower = [z(1)-r, z(2)-r, z(3)-r, z(4)-r];
corridors.z_upper = [z(1)+r, z(2)+r, z(4)+r, z(4)+r];

make_plots = true;

poly_traj = uas_minimum_snap(knots, order, waypoints, corridors, make_plots);
