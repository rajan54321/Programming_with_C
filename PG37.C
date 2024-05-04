#include<stdio.h>
#include<conio.h>

#define bool int

void printf_bool(bool value)
{
	value=value? printf("true\n") : printf("false\n");
}

void main()
{
	int x=10,y=20;
	bool result;
	clrscr();

	printf("x =%d\n",x);
	printf("y =%d\n",y);

	/*demonstrate = = Operator*/
	result = (x == y);
	printf("bool result : (x == y);");
	printf_bool(result);

	/*demonstrate ! = Operator*/
	result = (x != y);
	printf("bool result : (x != y);");
	printf_bool(result);

	/*demonstrate >  Operator*/
	result = (x > y);
	printf("bool result : (x > y);");
	printf_bool(result);

	/*demonstrate > = Operator*/
	result = (x >= y);
	printf("bool result : (x >= y);");
	printf_bool(result);

	/*demonstrate < = Operator*/
	result = (x <= y);
	printf("bool result : (x <= y);");
	printf_bool(result);
	getch();
}
