#include<stdio.h>
#include<conio.h>

void main()
{
	if(argc < 2)
		printf("\n Too few arguments");
	else if(argc > 2)
		printf("\n Too much arguments");
	else
		printf("\n Hello,%s",argv[1]);
}