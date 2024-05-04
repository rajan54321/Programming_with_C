#include<stdio.h>
	void main()
		{
			int i,x,y,mul;
			i=1;
			mul=1;

			printf("Enter x,Y:");
			scanf("%d%d",&x,&y);

			while(i<=y)
			{
				mul=mul*x;
				i++;
			}
			printf("mul=%d",mul);

		}