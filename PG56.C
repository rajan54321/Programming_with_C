#include<stdio.h>
#include<conio.h>

void main()
{
	int no;
	clrscr();

	printf("\n Enter a No. :");
	scanf("%d",&no);

	if(no%2!=0)
	{	printf("\n No. is Odd");

	}
	else
	{
		printf("\n No. is Even");
	}

	printf("\n End of program");
	getch();
}