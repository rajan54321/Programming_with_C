#include<stdio.h>
#include<conio.h>

void largest(int,int);
int main()
{
	int a,b;

	printf("\n Enter two Numbers");
	scanf("%d \t %d",&a,&b);

	largest(a,b);
	return 0;
}

void largest(int a,int b)
{
	if(a>b)
		printf("\n largest element = %d",a);
	else
		printf("\n largest element = %d",b);
}
