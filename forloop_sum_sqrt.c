#include<stdio.h>
	void main()
		{
			int i,sum,n;
			i=1;
			sum=0;

			printf("Enter N:");
			scanf("%d",&n);

			for(i=1;i<=n;i++)
			{
				sum=sum+(i*i);
			}
			printf("sum=%d",sum);

		}