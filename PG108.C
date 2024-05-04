#include<stdio.h>
#include<conio.h>
int add(int,int);
int sub(int,int);
float div(int,int);
int mul(int,int);

void main()
{
	int a,b,ans;
	int choice;
	float ans;

	printf("\n 1. ADDITION");
	printf("\n 2. SUBTRACTION");
	printf("\n 3. MULTIPLICATION");
	printf("\n 4. DIVISION");
	printf("\n Enter Selection :");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:
		{
			ans = add(a,b);
			printf("\n ADDITION is : %d",ans);
			break;
		}
		case 2:
		{
			ans = sub(a,b);
			printf("\n SUBTRACTION is : %d",ans);
			break;
		}
		case 3:
		{
			ans = mul(a,b);
			printf("\n MULTIPLITION is : %d",ans);
			break;
		}
		case 4:
		{
			ans = div(a,b);
			printf("\n DIVISION is : %d",ans);
			break;
		}
		default :
		{
			printf("\N Wrong choice");
			break;
		}
	}

	printf("\n Program Over");
	getch();
}

int add(int x,int y)
{
	return(x+y);
}
int sub(int x,int y)
{
	return(x-y);
}
int mul(int x,int y)
{
	return(x*y);
}
float div(int x,int y)
{
	return(x/y);
}

