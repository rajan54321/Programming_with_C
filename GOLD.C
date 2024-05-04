#include<stdio.h>
#include<conio.h>

void main()
{
	long i,no,sum = 0;
	float avg;
	clrscr();

	i=1;
	while(i<=3)
	{
		printf("\n Enter Value of Gold : ");
		scanf("%ld",&no);
		sum = sum + no;
		i =i+1;
	}

	avg=sum/3.0;

	printf("\n Average of these 3 values of Gold : %.2f",avg);
	getch();
}