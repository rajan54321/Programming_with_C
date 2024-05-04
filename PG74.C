#define loop 100
#define ACCURACY 0.0001

#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	float x,term,sum;
	clrscr();
	printf("\n Enter value of  x :");
	scanf("%f",&x);
	sum = 0;
	for(term = 1,n = 1;n <= loop;n++)
	{
		sum += term;
		if(term <= ACCURACY)
			goto output;
		term*=x;
	}
	printf("\n FINAL VALUE OF N IS NOT SUFFICIENT");
	printf("\n TO ACHIEVE DESIRED ACCURACY");
	goto end;
	output :
		printf("\n Exit from the Loop");
		printf("\n sum = %f; No. of items = %d",sum,n);
	end:
		getch();
}