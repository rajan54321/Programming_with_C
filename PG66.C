#include<stdio.h>
#include<conio.h>

void main()
{
	int sum = 0,no,i;
	float avg;
	clrscr();

	i=1;
	while(i<= 10)
	{
		printf("\n Enter a no. : ");
		scanf("%d", &no);
		sum = sum + no;
		i =i+1;
	}
	avg = sum /10.0;
	printf("\n Average of 10 no's is : %f",avg);
	getch();
}