#include<stdio.h>
#include<conio.h>

void main()
{
	float p,r,n,i;

	printf("\n Enter Principle amount,Rate of Interest and Duration");
	scanf("%f %f %f",&p,&r,&n);

	i=(p*r*n)/100.0;

	printf(" Simple Interest is : %f",i);
	getch();
}