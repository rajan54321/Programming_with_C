#include<stdio.h>
	void main ()
	{
		int a,b,c;

		printf("Enter A:");
		scanf("%d",&a);
		printf("Enter B:");
		scanf("%d",&b);
		printf("Enter C:");
		scanf("%d",&c);

		if(a>b && a>c)
		printf("%d Is Largest",a);

		if(b>a && b>c)
		printf("%d Is Largest",b);

		if(c>a && c>b)
		printf("%d Is Largest",c);
	}