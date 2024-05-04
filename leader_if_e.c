#include<stdio.h>
	void main()
		{
			int a,b,c;

			printf("Enter A:");
			scanf("%d",&a);
			printf("Enter B:");
			scanf("%d",&b);
			printf("Enter C:");
			scanf("%d",&c);

			if(a>b && a>c)
				{
					printf("%d Is Largest",a);
				}
				else if(b>c)
				{
					printf("%d Is Largest",b);
				}
			else
			{
				printf("%d IS Largest",c);
			}
		}