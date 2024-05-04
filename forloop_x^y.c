#include<stdio.h>
	void main()
		{
			int x,y,i,pow;
			pow=1;

			printf("Enter X,Y:");
			scanf("%d%d",&x,&y);

			for(i=1;i<=y;i++)
			{
				pow=pow*x;
			}

			printf("pow=%d",pow);
		}