#include<stdio.h>
#include<ctype.h>
#include<conio.h>

void main()
{
	int a,b;

	printf("\n Enter two values");
	scanf("%d %d",&a,&b);
	if(a>b)
	{
		printf("\n First value is Big");
	}

	if(b>a)
	{
		printf("\n Second value is Big");
	}
	getch();
}