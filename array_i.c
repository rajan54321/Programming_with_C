#include<stdio.h>
	void main()
		{
			int n;

			printf("Enter Array Size:");
			scanf("%d",&n);

			int num[n],i,j,temp=0;
			for(i=0;i<n;i++)
			{
				printf("num[%d]:",i);
				scanf("%d",&num[i]);
			}

			for(j=0;j<n-1;j++)
			{
				for(i=0;i<n-1;i++)
				{
					temp=num[i];
					num[i]=num[i+1];
					num[i+1]=temp;
				}
			}
		}