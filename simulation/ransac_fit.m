

thrust = out.Thrust.Data;
acc = out.Acc.Data - 9.81;
time = out.Acc.Time;

points = [acc, thrust];

%Data = [time, thrust, acc];
%csvwrite('Data.csv', Data)

sampleSize = 2; % number of points to sample per trial
maxDistance = 1; % max allowable distance for inliers

fitLineFcn = @(points) polyfit(points(:,1),points(:,2),1); % fit function using polyfit
evalLineFcn = ...   % distance evaluation function
  @(model, points) sum((points(:, 2) - polyval(model, points(:,1))).^2,2);

[modelRANSAC, inlierIdx] = ransac(points,fitLineFcn,evalLineFcn, ...
  sampleSize,maxDistance);

modelInliers = polyfit(points(inlierIdx,1),points(inlierIdx,2),1);

a = modelInliers(1)
b = modelInliers(2)

inlierPts = points(inlierIdx,:);
x = [min(inlierPts(:,1)) max(inlierPts(:,1))];
y = modelInliers(1)*x + modelInliers(2);
hold on
plot(x, y, 'g-')
plot(acc, thrust, "o")
hold off