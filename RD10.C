#include<stdio.h>
#include<conio.h>

#define loop 500
#define ACCURACY 0.00005

void main()
{
	int n;
	float term,x,sum;
	clrscr();

	printf("\n Enter value of x : ");
	scanf("%f",&x);

	sum=0;

	for(term=1,n=1;n<=loop;n++)
	{
		sum = sum + term;
		term=term * x;

		if(term <= ACCURACY)
			goto output;
		printf("\n TERM = %f",term);
	}


	output:
		printf("\n You are Exit from the Loop");
		printf("\n SUM : %f,  No. of ITEMS : %d",sum,n);

	printf("\n THE VALUE CAN'T BE REACHABLE");
	printf("\n TO ACHIVE YOUR TARGET");
	goto end;

	end:
		getch();
}