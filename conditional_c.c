#include<stdio.h>
	void main()
		{
			int a,b,c;

			printf("Enter A,B,C:");
			scanf("%d%d%d",&a,&b,&c);

			(a>b?printf("%d*%d=%d",a,c,a*c):printf("%d*%d=%d",b,c,b*c));
		}