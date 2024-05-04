#include<stdio.h>
#include<conio.h>

void main()
{
	int cust_no,units_consumed;
	float amount;

	printf("\n Enter customer no. and units consumed");
	scanf("%d %d ",&cust_no, & units_consumed);

	if(units_consumed<=200)
		amount=0.5*units_consumed;
	else if(units_consumed<=400)
		amount = 100 + 0.65*(units_consumed-200);
	else if(units_consumed<=600)
		amount = 230 + 0.80*(units_consumed-400);
	else
		amount = 390 + 1.00*(units_consumed-600);

	printf("\n customer no. : %d, charges = %f \n",cust_no,amount);
	getch();
}