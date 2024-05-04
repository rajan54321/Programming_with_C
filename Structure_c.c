#include<stdio.h>
	struct time_struct
	{
		int hour;
		int minute;
		int second;
	}time;
	void main()
	{
		printf("Enter Hour:");
		scanf("%d",&time.hour);
		printf("Enter Minute:");
		scanf("%d",&time.minute);
		printf("Enter Second:");
		scanf("%d",&time.second);


		printf("%d:%d:%d",time.hour,time.minute,time.second);
	}