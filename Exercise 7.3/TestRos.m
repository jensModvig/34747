clear all


poses = sim("poses", 10);

num_hoops = 3;
initial_drone_pose = [mean(poses.Drone.Pose.Position.X);...
                      mean(poses.Drone.Pose.Position.Y);...
                      mean(poses.Drone.Pose.Position.Z)];

x = mean(poses.Hoop3.Pose.Position.X.data);
y = mean(poses.Hoop3.Pose.Position.Y.data);
z = mean(poses.Hoop3.Pose.Position.Z.data);

x_q = mean(poses.Hoop3.Pose.Orientation.X.data);
y_q = mean(poses.Hoop3.Pose.Orientation.Y.data);
z_q = mean(poses.Hoop3.Pose.Orientation.Z.data);
w_q = mean(poses.Hoop3.Pose.Orientation.W.data);

euler_hoop3 = quat2eul([x_q, y_q, z_q, w_q], 'ZYX');


% Diameter of the hoops
diameter = 0.20;
r = diameter / 2;

% Trajectory generation

knots = [0 5];
waypoints = cell(1,2);
waypoints{1} = initial_drone_pose;
waypoints{2} = initial_drone_pose;
% Fix this...
order = 7;
corridors.times = [];
corridors.x_lower = [];
corridors.x_upper = [];
corridors.y_lower = [];
corridors.y_upper = [];
corridors.z_lower = [];
corridors.z_upper = [];

for i = 1:num_hoops
    corridors.times = [corridors.times, i*5];
    corridors.x_lower = [];
    corridors.x_upper = [];
    corridors.y_lower = [];
    corridors.y_upper = [];
    corridors.z_lower = [];
    corridors.z_upper = [];
end



% ...until here
make_plots = true;

poly_traj = uas_minimum_snap(knots, order, waypoints, corridors, make_plots);

