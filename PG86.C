#include<stdio.h>
#include<conio.h>

void main()
{
	int a[3][3],b[3][3],c[3][3];
	int i,j;

	printf("\n Enter Values for first matrix :");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("\n Enter array element no. %d,%d",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n Enter Values for second matrix : ");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("\n Enter array element no. %d,%d",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n Sum of two matrix : ");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			c[i][j]=a[i][j]+ b[i][j];
		}
	}
	printf("\n Printing of Resultant matrix : ");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%.2d\t",c[i][j]);
		}
		printf("\n");
	}
	getch();
}