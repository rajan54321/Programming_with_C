#include<stdio.h>
	void main()
		{
			int sum=0,sum1,sum2,n,i=1;

			printf("Enter Number:");
			scanf("%d",&n);

			while(i<=n)
			{
				if(i%2==0)
				{
					sum1=sum-i;
				}
				else
				{
					sum2=sum+i;
				}
				i++;
				sum=sum1+sum2;
			}
			printf("%d",sum);
		}