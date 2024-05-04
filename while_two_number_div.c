#include<stdio.h>
	void main()
		{
			int a,b,c;

			printf("Enter Range:");
			scanf("%d%d",&a,&b);
			c=a;

			while(c<=b)
			{
				if(c%2==0 && c%3!=0)
				{
					printf("%d\n",c);
				}
				c++;
			}
		}