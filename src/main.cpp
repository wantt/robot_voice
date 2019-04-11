//#include "record.cpp"
#include "record.hpp"
#include "ALSADevices.h"
#include "constants.h"
#include <iostream>
#include "kws.h"

#include <pthread.h>

//#include "ros/ros.h"
//#include "std_msgs/String.h"

//extern struct kws_s kws1;
//extern ros::Publisher voiceWordsPub = n.advertise<std_msgs::String>("voiceWords", 1000);

//static char *g_result;

int main(int argc,char **argv){
/*
    // 初始化ROS
    ros::init(argc, argv, "voiceRecognition");
    ros::NodeHandle n;
    ros::Rate loop_rate(10);
    ros::Publisher voiceWordsPub = n.advertise<std_msgs::String>("voiceWords", 1000);
*/	
	int ret;
	struct kws_s kws1;
//	kws1->node = n;
	pthread_t tid;
	ret = kws_start(&kws1);
	int *a = 0;
	pthread_create(&tid,NULL,record_routine,&a);
	while(1){
	if(kws1.kws_flag){
		kws1.kws_flag = 0;
//		std_msgs::String msg;
//		msg.data = kws1.kws_msg;
//		voiceWordsPub.publish(msg);
		}
	}

return 0;

}
