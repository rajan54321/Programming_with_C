#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i;
	clrscr();

	printf("\n Enter any Number :");
	scanf("%d",&n);

	for(i=1;i<=10;i++)

	{
		printf("\n %d %d %d",n,i,n*i);
	}
	getch();
}