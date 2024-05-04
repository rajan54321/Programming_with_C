#include<stdio.h>
	void main()
		{
			int a;

			printf("Enter Number:");
			scanf("%d",&a);

			a=a%10;

			if(a%2==0)
			{
				printf("%d Is Even Number",a);
			}
			else
			{
				printf("%d Is Odd Number",a);
			}

		}
