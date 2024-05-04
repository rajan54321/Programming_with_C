#include<stdio.h>
	void main()
		{
			float sci,math,phy,com,eng,total,percentage;

			printf("Enter Sci Mark:");
			scanf("%f",&sci);
			printf("Enter math Mark:");
			scanf("%f",&math);
			printf("Enter phy Mark:");
			scanf("%f",&phy);
			printf("Enter com Mark:");
			scanf("%f",&com);
			printf("Enter eng Mark:");
			scanf("%f",&eng);

			total=sci+math+phy+com+eng;
			percentage=total/5;

			if(percentage<35)
			{
				printf("Fail.......");
			}
			else if(percentage>=35 && percentage<45)
			{
				printf("Pass.........");
			}
			else if(percentage>=45 && percentage<65)
			{
				printf("2nd Class......");
			}
			else if(percentage>=65 && percentage<70 )
			{
				printf("1st Class.......");
			}
			else
			{
				printf("distriction....");
			}

		}