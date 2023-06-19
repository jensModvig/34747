clc; close all; 

if exist('out', 'var') == 1
    disp('Reading the simulation output')
    % read the output data
    thrust = out.Thrust.Data; 
    positions = out.Positions.Data;
    z_data = positions(:,3);
    Time = positions(:,4);
    % save data
    data = [thrust, positions];
    csvwrite('data.csv',data)
else
    disp('Reading the saved data')
    % read the saved data
    data = csvread('data.csv');
    Time = data(:,5);
    thrust = data(:,1);
    z_data = data(:,4);
end

figure 
subplot(131)
scatter(Time, z_data)
xlabel('time'); ylabel('z-data');
subplot(132)
scatter(Time, thrust)
xlabel('time'); ylabel('thrust');
subplot(133)
scatter(z_data, thrust)
xlabel('z-data'); ylabel('thrust');

% data cleansing
I = find(z_data > 0.01);
z_data = z_data(I(1):I(end));
thrust = thrust(I(1):I(end));
Time = Time(I(1):I(end));

% accelerarion calculator 
z_acc = acc_calculator(z_data, Time);

% polynomial function 
    % y: thrust and x:acc
coefficients = polyfit(z_acc,thrust(3:end),1);
slope        = coefficients(1);
intercept    = coefficients(2);
fitted_line = polyval(coefficients, z_acc);

% plotting
figure
scatter(z_acc, thrust(3:end), 'filled');
hold on
plot(z_acc, fitted_line, 'r');
xlabel('z-acc');
legend('thrust', 'fitted line', Location='southeast')


%% 
z_pos = out.Positions.Data(3);
waittime = 10; interval = 1; timepassed = 0;

% Step 1 : starting from (0,1,1) to (1,1,1)
    % acceleration = constant
    % thrust = polyval(coefficients, acc)
if z_pos ~= 1
    acc = 1;
    thrust = polyval(coefficients, acc);
else
    % Step 2 : staying there for 10s
        % acceleration = 0
        % thrust = intercept 
    thrust = intercept;
    while timepassed < waittime
        pause(interval)
        timepassed = timepassed + interval;
        if timepassed == 3
            disp('10s passed')
        end
    end
    % Step 3 : flying from (1,1,1) to (2,1,1)
        % acceleration = constant
        % thrust = polyval(coefficients, acc)
    acc = 1;
    thrust = polyval(coefficients, acc);
    if z_pos == 2
    end
end


% use while instead of if 
% add errors to the z_pos

















