#include<stdio.h>
#include<conio.h>

void main()
{
	char sou[100],tar[100];
	void xstrcpy(char*,char*);
	clrscr();

	printf("\n Enter Any String :");

	gets(sou);

	xstrcpy(tar,sou);

	printf("\n SOURCE STRING \n");

	puts(sou);

	printf("\n TARGET STRING \n");

	puts(tar);

	getch();
}

void xstrcpy(char*t,char*s)
{
	while(*s != '\0')
	{
		*t =*s;
		s++;
		t++;
	}
	*t = '\0';
}