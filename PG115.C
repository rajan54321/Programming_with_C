#include<stdio.h>
#include<conio.h>

int st_len(char[]);

void main()
{
	char str[20];
	int l;
	clrscr();

	printf("\n Enter a String : ");
	gets(str);
	l= st_len(str);
	printf("\n length of a string is : %d",l);
	getch();
}
int st_len(char str[])
{
	int i,j=0;
	for(i=0;str1[i] != '\0';i++)
	{
		j++;
	}
	return(j);
}