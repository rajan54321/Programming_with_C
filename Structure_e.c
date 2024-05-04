#include<stdio.h>
	struct student_recod{
		char name[100];
		char branch[100];
		float mark;
	}stu[5];
	void main()
	{
		for(int i=0;i<5;i++)
		{
			printf("enter detail of Student:%d\n",i+1);
			printf("Name=");
			scanf("%s",&stu[i].name);
			printf("Branch=");
			scanf("%s",&stu[i].branch);
		
			printf("Total mark=");
			scanf("%f",&stu[i].mark);
		}
		printf("\n");
		for(int i=0;i<5;i++)
		{
			printf("Student %d\n",i);
			printf("Name=%s\n",stu[i].name);
			printf("Branch=%s\n",stu[i].branch);
		
			printf("Total Mark=%f\n",stu[i].mark);
		}
	}