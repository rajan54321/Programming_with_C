#include<stdio.h>
#include<conio.h>

void main()
{
	int x=10,y=20,remainder=0;
	clrscr();

	printf("x =%d\n",x);
	printf("y =%d\n",y);

	/*demonstrate+Operator*/
	y=y+x;
	printf("Y=Y+X;Y=%d\n",y);

	/*demonstrate-Operator*/
	y=y-2;
	printf("Y=Y-2;Y=%d\n",y);

	/*demonstrate*Operator*/
	y=y*5;
	printf("Y=Y*5;Y=%d\n",y);

	/*demonstrate/Operator*/
	y=y/5;
	printf("Y=Y/5;Y=%d\n",y);

	/*demonstarate%operator*/

	remainder=y%3;

	printf("Remainder=%d\n",remainder);
	getch();
}

