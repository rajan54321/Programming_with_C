#include<stdio.h>
	int max(int,int);
	void main()
		{
			int a,b,m;

			printf("Enter A:");
			scanf("%d",&a);
			printf("Enter B:");
			scanf("%d",&b);

			m=max(a,b);
			printf("Max=%d",m);
		}
		int max(int a,int b)
		{
			if(a>b)
			{
				return a;
			}

			else
			{
				return b;
			}
		}
		