#include<stdio.h>
	void main()
		{
			int i,sum,n;
			sum=0;

			printf("Enter i,n:");
			scanf("%d%d",&i,&n);

			for(i;i<=n;i++)
			{
				if(i%2==0 && i%3!=0)
				{
					sum=sum+i;
				}
			}
			printf("sum=%d",sum);
		}