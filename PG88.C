#include<stdio.h>
#include<conio.h>

void main()
{
	int wno;
	char weekdays[7][10] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Sunday"};

	repeat:
		printf("\n Please enter weekdays no. between 1 and 7");
		scanf("%d",&wno);

		if(wno < 1 || wno > 7)
			goto repeat;

		printf("\n weekday is  %s", weekdays[wno - 1]);
		getch();
}