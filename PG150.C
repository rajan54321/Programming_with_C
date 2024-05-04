#include<stdio.h>
#include<conio.h>

void main()
{
	int firstvalue,secondvalue;
	int *mypointer;

	*mypointer = 10;
	mypointer = &firstvalue;

	*mypointer = 20;
	mtypointer = &secondvalue;

	printf("\n First Value is %d",firstvalue);
	printf("\n Second Value is %d",secondvalue);
	return 0;
}