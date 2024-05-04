#include<stdio.h>
#include<conio.h>
#define ROWS 5
#define COLUMNS 5

void main()
{
	int product[ROWS][COLUMNS],i,j,r,c;

	printf("\n Printing of a product table : ");
	printf("\n ------------------------------");

	for(j=1;j<= COLUMNS;j++)
		printf("%4d",j);
	printf("\n");
	printf("\n --------------");
	for(i=0;i< ROWS;i++)
	{
		r=i+1;
		printf("%2d",r);
		for(j=0;j< COLUMNS;j++)
		{
			c= j+1;
			product[i][j] = r*c;
			printf("%4d",product[i][j]);
		}
	}
}