#include<stdio.h>
#include<conio.h>

void main()
{
	int x=12345;
	long y = 9876;
	float z = 98.7654;
	char name[20] = "SWETA SHAH";

	printf("%d\n",x);
	printf("%10d\n",x);
	printf("%-10d\n",x);
	printf("%7.4f\n",z);
	printf("%20s\n",name);
	printf("%-20.10s\n",name);
	getch();
}
