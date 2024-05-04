#include<stdio.h>
#include<conio.h>

void main()

{
	float age;
	clrscr();

	printf("\n Enter vlaue of Age : ");
	scanf("%f",&age);


	if(age<=18)
	{
		printf("\n You are Teenger");
	}

	else if(age<=35)
	{
		printf("\n You are Young");
	}

	else if(age<=50)
	{
		printf("\n You are Major");
	}

	else
	{
		printf("\n You are else");
	}
	getch();
}


