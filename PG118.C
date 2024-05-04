#include<stdio.h>
#include<conio.h>

void stat();
void main()
{
	int i;
	for(i=1;i<3;i++)
		stat();
	getch();
}

void stat()
{
	static int x = 0;
	x+=1;
	printf("\n x =%d",x);
}