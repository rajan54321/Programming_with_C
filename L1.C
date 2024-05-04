#include<stdio.h>
#include<conio.h>

void main()

{
	float age;
	clrscr();
	printf("\n Enter value of Age : ");
	scanf("%f",&age);

	if(age>=18)
		{
			printf("\n You are ADULT");
		}
	getch();
}