#include<stdio.h>
	void main()
		{
			int i,n;
			float sum;
			i=1;

			sum=0;

			printf("Enter N:");
			scanf("%d",&n);

			while(i<=n)
			{
				
				sum=sum+(float)1/i;
				i++;
			}
			printf("sum=%f\n",sum);
		}