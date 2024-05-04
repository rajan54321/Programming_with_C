#include<stdio.h>
#include<conio.h>

void main()
{
	int no =1,i,sum = 0;
	clrscr();

	printf("\n Enter value  of i : ");
	scanf("%d",&i);
	while(no <= i)
	{
		sum= sum + no;
		no = no + 1;
	}
	printf("\n sum of no's  between 1 and %d is : %d",i,sum);
	getch();
}