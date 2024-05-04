#include<stdio.h>
	void main()
		{
			int n;

			printf("Enter Array Size:");
			scanf("%d",&n);

			int num[n],i,sum1,sum2;
			sum1=0;
			sum2=0;
			for(i=0;i<n;i++)
			{
				printf("num[%d]:",i);
				scanf("%d",&num[i]);
				if(num[i]>0)
				{
					sum1=sum1+1;
				}	
				else
				{
					sum2=sum2+1;
				}
			}
			printf("Positive Number=%d\n",sum1);
			printf("Negetive Number=%d",sum2);

		}