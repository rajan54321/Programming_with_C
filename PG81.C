#include<stdio.h>
#include<conio.h>

void main()
{
	char str[20],ch;
	int i,count= 0;
	clrscr();

	printf("\n Enter a string :");
	scanf("%s",str);


	printf("\n Enter a character");
	ch = getche();


	for(i=0;str[i]!= '\0';i++)
	{
		 if(str[i] == ch)
			count ++;
	}
	printf("\n No. of re[petitions of a character in astring is %d",count);
	getch();
}