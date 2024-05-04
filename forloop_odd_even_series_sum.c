#include<stdio.h>
	void main()
	{
		int sum=0,i=1,n;

		printf("Enter N:");
		scanf("%d",&n);

		for(i=1;i<=n;i++)
		{
			if(i%2==0)
			{
				sum=sum-i;
			}
			else
			{
				sum=sum+i;
			}

		}
		printf("sum=%d",sum);
	}