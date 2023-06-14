clc; clear; close all;

x = [1 2 3 4 5 6 7];
y = [1.2 2.5 3 4.3 3.9 5.5 7.6];
N = 1;

[P,S] = polyfit(x,y,N);

y_pol = 0;
for i = 0 : length(P)-1
    y_pol = y_pol + P(length(P) - i) .* x.^i;
end

figure
scatter(x, y)
hold on
plot(x, y_pol)

%% Data analysis
thrust = out.Thrust.Data; 
positions = out.Positions.Data;
z_data = positions(:,3);

% data cleansing
I = find(z_data > 0.01);
thrust = thrust(I(1):I(end));
positions = positions(I(1):I(end),:);
Time = positions(:,4);

% save data
data = [thrust, positions];
csvwrite('data.csv',data)

% read data
data = csvread('data.csv');
Time = data(:,5);
thrust = data(:,1);
z_data = data(:,4);

% polynomial function 
figure
plot(Time, z_data)
figure
plot(Time, thrust)
figure
plot(z_data, thrust)



