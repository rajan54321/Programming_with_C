#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,a[4][4],b[4][4],c[4][4];
	clrscr();

	printf("\n Enter values of 1st Matrix :");
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
		{
			printf("\n Enter Array element of %d %d :",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}

	printf("\n Enter values of 2nd Matrix :");
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
		{
			printf("\n Enter Array element of %d %d :",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}

	printf("\n Sum of Two Matrix :");
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
		{
			c[i][j]=a[i][j]-b[i][j];
		}
	}

	printf("\n The Subtractiion of Two Matrix : \n ");
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
		{
			printf(" %3d \t",c[i][j]);
		}
		printf("\n");
	}
	getch();
}