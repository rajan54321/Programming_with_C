#include<stdio.h>
#include<conio.h>
#define F_LOW 0
#define F_MAX 250
#define STEP 25

void main()
{
	float f,c;
	clrscr();

	f=F_LOW;

	printf(" Fahreheit \t Celsius \n \n");
	while(f<= F_MAX);
	{
		c=(f-32.0)/1.8;
		printf("%5.1f\t%7.2f \n",f,c);
		f=f+STEP;
	}
	getch();
}