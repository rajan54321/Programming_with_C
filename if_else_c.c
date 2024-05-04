#include<stdio.h>
	void main()
		{
			int a,b;

			printf("Enter A:");
			scanf("%d",&a);
			printf("Enter B:");
			scanf("%d",&b);

			if(a>b)
			{
				printf("%d Is Larger Than %d",a,b);
			}

			else
			{
				printf("%d Is Larger Than %d",b,a);
			}
		}