#include<stdio.h>
	void main()
		{
			int year;

			printf("Enter Year:");
			scanf("%d",&year);

			if(year%4==0 && year%100!=0)
			{
				printf("%d Is Leap Year",year);
			}
			else if(year%400==0)
			{
				printf("%d Is Leap Year",year);
			}
			
			else
			{
				printf("%d Is Not A Leap Year",year);
			}

		}