function [route_scaled] = find_route_3d(wall, start_letter, end_letter, x_scale, y_scale, z_scale, x_offset, y_offset, z_offset)
    % Setup the map
    % Load the map from the wall file. Each line, except the two last, in the
    % wall file is an obstacle. The position of the obstacle is defined in the
    % wall file by its x y z coordinates. The three last elements is
    % the size of the maze, the starting position and goal position
    
    % If a different named file is used, then write it into the wall variable
    % e.g. wall = maze_2;
    wall = wall;
    
    key = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    values = {[1 1 1], [2 1 1] [3 1 1], [4 1 1], [1 5 1], [2 5 1], [3 5 1], [4 5 1]};
    D = containers.Map(key, values);

    % Define the map size
    max_x = wall(length(wall) - 2, 1);
    max_y = wall(length(wall) - 2, 2);
    max_z = wall(length(wall) - 2, 3);
    map = zeros(max_x, max_y, max_z);
    
    % Input the obstacles into the map
    for i = 1:(length(wall) - 3)
        map = gen_square3d([wall(i, 1) wall(i, 1) + 1;...
                            wall(i, 2) wall(i, 2) + 1;...
                            wall(i, 3) wall(i, 3) + 1], map);
        
    end
    
    % Define the starting and end position
    start = D(start_letter);
    end_ = D(end_letter);    
    
    % Make sure the start and end is not an obstacle
    map(start(1), start(2), start(3)) = 0;
    map(end_(1), end_(2), end_(3)) = 0;
    
    % Run the algorithm to optain the route
    %route = greedy_3d(map, start, end_);
    route = astar_3d(map, start, end_);
    
    % Make a copy of the route
    route_scaled = route;
    
    % Scale the copy
    route_scaled(:,1) = (route_scaled(:,1) - 1) * x_scale + x_offset;
    route_scaled(:,2) = (route_scaled(:,2) - 1) * y_scale + y_offset;
    route_scaled(:,3) = (route_scaled(:,3) - 1) * z_scale + z_offset;
    route_scaled = [route_scaled; route_scaled(end, 1) route_scaled(end, 2) 0];
end
