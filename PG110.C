#include<stdio.h>
#include<conio.h>

main()
{
	statement1();
	starline();
	statement2();
	starline();
	return 0;
}

statement1()
{
	printf("\n Sample subprogram output");
}
statement2()
{
	printf("\n Sample subprogram output two");
}
starline()
{
	int a;
	for(a=1;a<60;a++)
	printf("%c",'*');
	printf("\n");
}

