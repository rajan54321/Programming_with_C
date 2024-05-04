#include<stdio.h>
	void main()
		{
			int sum=0,n,i=1;

			printf("Enter Number:");
			scanf("%d",&n);

			while((i*i)<=n)
			{
				printf("+%d",(i*i));
				sum=sum+(i*i);
				i++;
			}
			printf("=%d\n",sum);
		}