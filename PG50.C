#include<stdio.h >
#include<ctype.h>
#include<conio.h>

void main()
{
	char ch;
	clrscr();
	printf("\n Enter a character :");

	ch=getche();
	if(islower(ch))
		ch=toupper(ch);
	printf("\n The uppercase character is : %c",ch);
	getch();
}