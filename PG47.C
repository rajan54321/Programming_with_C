#include<stdio.h>
#include<conio.h>

void main()
{
	char ans;
	clrscr();
	printf("Press M if you married and N if unmarried : ");
	ans=getche();
	if(ans == 'M'|| ans == 'm')
		printf("\n You are Married");
	else if(ans == 'N'|| ans == 'n')
		printf("\n You are Unmarried");
	else
		printf("\n You have entered wrong choice");
	getch();
}