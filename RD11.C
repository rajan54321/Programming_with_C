#include<stdio.h>
#include<conio.h>

void main()
{
	int x[4],Sum;
	clrscr();

	printf("\n Enter value of x[0] : ");
	scanf("%d",&x[0]);

	printf("\n Enter value of x[1] : ");
	scanf("%d",&x[1]);

	printf("\n Enter value of x[2] : ");
	scanf("%d",&x[2]);

	printf("\n Enter value of x[3] : ");
	scanf("%d",&x[3]);

	Sum=x[0]+x[1]+x[2]+x[3];

	printf("\n \t %d\t %d\t %d\t %d\t",x[0],x[1],x[2],x[3]);
	printf("\n \t SUM = %d",Sum);

	getch();
}


