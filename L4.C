#include<stdio.h>
#include<conio.h>

void main()

{
	float sales,discount,da;
	clrscr();

	printf("\n If you are buying of sales :");
	scanf("%f",&sales);

	if(sales<=10000.0)
	{
		discount=7;
	}

	else if(sales<=15000.00)
	{
		discount=8;
	}

	else if(sales<=20000.00)
	{
		discount=9;
	}

	else
	{
		discount=10;
	}

	da=sales*discount/100.0;

	printf("\n Discount = %f",discount);

	printf("\n Discount Amount : %.2f",da);
	getch();
}