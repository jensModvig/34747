Restart drone and cfclient at the same time

Press scan in cfclient until the list updates


Cfclient isnt required to run
Cfclient must be disconnected
for cfstart 5 to run


# Restart everything
killall -9 rosmaster & killall -9 rosout & roscore
Replug the antenna


rosrun crazyflie_tools reboot --uri radio://0/5/2M/0xE7E7E7E7E7

cfstart 5

In matlab type: run uas_parameters.m 
(includes
Clear all;
Close all;
)


# after crash
Check that motors arent pushed up