#include<stdio.h>
	void main ()
	{
		int a,b,ch;

		printf("Enter A:");
		scanf("%d",&a);
		printf("Enter B:");
		scanf("%d",&b);

		printf("\n1.Addition\n");
		printf("\n2.Substraction\n");
		printf("\n3.Multiplication\n");
		printf("\n4.Division\n");

		printf("Enter Your Choise:");
		scanf("%d",&ch);

		if(ch==1)
		printf("add=%d",a+b);

		if(ch==2)
		printf("sub=%d",a-b);

		if(ch==3)
		printf("mul=%d",a*b);

		if(ch==4)
		printf("div=%d",a/b);
	}