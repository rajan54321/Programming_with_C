#include<stdio.h>
#include<conio.h>

void main()
{
	int i,no,min;
	clrscr();
	min = 9999;

	for(i=1;i<=10;i++)
	{
		printf("\n Enter a no.");
		scanf("%d", &no);

		if(no < min)
			min = no;
	}
	printf("\n Minimum from all 10 no's is %d", min);
	getch();
}