#include<stdio.h>
	struct cricket
	{
		char name[100];
		char team[100];
		float avg;
	}cri[50];
	void main()
	{
		for(int i=0;i<50;i++)
		{
			printf("Enter Player Of %d",i+1);
			printf("Player Name=");
			scanf("%s",&cri[i].name);
			printf("Team=");
			scanf("%s",&cri[i].team);
			printf("Average=");
			scanf("%f",&cri[i].avg);
		}
		for(int i=0;i<50;i++)
		{
			printf("Player %d\n",i);
			printf("Name=%s\n",cri[i].name);
			printf("Team=%s\n",cri[i].team);
		
			printf("Avg=%f\n",cri[i].avg);
		}
	}