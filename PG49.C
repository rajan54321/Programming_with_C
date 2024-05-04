#include<stdio.h>
#include<ctype.h>
#include<conio.h>

void main()
{
	char ch;
	clrscr();
	printf("\n Enter a character : ");
	ch=getche();
	if(isalpha(ch)>0)
		printf("\n The character is a letter");
	else if(isdigit(ch)>0)
		printf("\n The character is a digit");
	else
		printf("\n The character is not alphanumeric");
	getch();
}