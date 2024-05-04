#include<stdio.h>
	void main()
		{
			int i=1,a;

			printf("Enter Number:");
			scanf("%d",&a);

			while(i<=a)
			{
				printf("%d\n",i);
				i=i+2;
			}
		}