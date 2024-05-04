#include<stdio.h>
#include<conio.h>

void square1(void);
void square2(int);
int square3(void);
int area(int b,int h);

int main(void)
{
	square1();
	sqaure2(7);

	printf("\n The value of Square3() is %d",square3());
	printf("\n The value of Square4(5) is %d",square4(5));
	printf("\n The value of area(3,7) is %d",area(3,7));
	getch();
}

void square2(int i)
{
	printf("\n THe Square of %d",i,i*i);
}

int square3(void)
{
	int x;
	printf("Please enter an Integer >");
	scanf("%d"&x);
	return(x*x);
}

int square4(int i)
{
	return(i*i);
}

int area(int b,int h)
{
	return(b*h);
}
