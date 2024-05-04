#include<stdio.h>
#include<conio.h>

void main()
{
	int i;
	clrscr();

	for(i=1;i<=10;i++)
	{
		printf("\n  %d  %d  %d  %d  %d  %d",i,i*2,i*3,i*4,i*5);
	}
	getch();
}