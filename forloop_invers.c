#include<stdio.h>
	void main()
		{
			int i,n;
			float sum;
			i=1;

			sum=0;

			printf("Enter N:");
			scanf("%d",&n);

			for(i=1;i<=n;i++)
			{
				
				sum=sum+(float)1/i;
				
			}
			printf("sum=%f\n",sum);
		}