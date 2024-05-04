#include<stdio.h>
	int sum(int);
	void main()
	{
		int n,s;
		printf("Enter N:");
		scanf("%d",&n);
		s=sum(n);
		printf("Sum=%d",s);
	}
		
	int sum(int n)
	{			
		int i,sum=0;
		for(i=1;i<=n;i++)
		{
			sum+=i;

		}
		return sum;
	}
		