close all
clear all
clc

load('wall.txt');

x_scale = 0.65;
y_scale = 0.55;
z_scale = 0.75;

x_offset = 0.3;
y_offset = 0.5;
z_offset = 0.25;

route = find_route_3d(wall, x_scale, y_scale, z_scale, x_offset, y_offset, z_offset);