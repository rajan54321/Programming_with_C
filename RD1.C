#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	clrscr();

	printf("\n Enter Value of A : ");
	scanf("%d",&a);

	printf("\n Enter Value of B : ");
	scanf("%d",&b);

	printf("\n Enter Value of C : ");
	scanf("%d",&c);

	if(a>b && a>c)
	{
		printf("\n A is BIG");
}

	if(b>a && b>c)
	{
		printf("\n B is BIG");
	}

	if(c>a && c>b)
	{
		printf("\n C is BIG");
	}
	getch();
}


