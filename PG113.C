#include<stdio.h>
#include<conio.h>

float ratio(int,int,int);
int difference(int,int);
int main()
{
	int a,b,c;

	printf("\n Enter three values : ");
	scanf("%d%d%d:",&a,&b,&c);
	printf("%f\n",ratio(a,b,c));
	return 0;
}

float ratio(int x,int y,int z)
{
	if(difference(y,z))
		return(x/y-z);
	else
		return(0,0);
}

int difference(int p,int q)
{
	if(p != q)
		return(1);
	else
		return(0);
}
