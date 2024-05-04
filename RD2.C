#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,max;
	clrscr();

	printf("\n Enter Value of A : ");
	scanf("%d",&a);

	printf("\n Enter Value of B : ");
	scanf("%d",&b);

	printf("\n Enter Value of C : ");
	scanf("%d",&c);

	if(a>b && a>c)
	{
		max=a;
		printf("\n Max is = %d",max);
	}
	else if(b>a && b>c)
	{
		max=b;
		printf("\n Max is = %d",max);
	}

	else if(c>a && c>b)
	{
		max=c;
		printf("\n Max is = %d",max);
	}

	else
	{
		printf("\n Some Values are Same");
	}
	getch();
}