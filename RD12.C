#include<stdio.h>
#include<conio.h>

void main()
{
	int values[10],i,sum;
	clrscr();

	sum=0;
	for(i=0;i<=9;i++)
	{
		printf("\n Enter %d values : ",i+1);
		scanf("%d",&values[i]);

		sum+=values[i];
	}

	printf("\n Enter the Sum of all values : %d",sum);
	getch();
}
