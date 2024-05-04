#include<stdio.h>
#include<conio.h>

void main()
{
	int values[10],i,nz=0,np=0,nn=0;
	clrscr();

	for(i=0;i<=9;i++)
	{
		printf("\n Enter %d value :",i+1);
		scanf("%d",&values[i]);
	}
	for(i= 0;i<= 9;i++)
	{
		if(values[i]>0)
		{
			nz =nz+1;
		}
		else if(values[i]>0)
			np =np + 1;
		else
			nn =nn + 1;
	}

	printf("\n No. of zero values : %d",nz);
	printf("\n No. of Positive values : %d",np);
	printf("\n No. of Negative values : %d",nn);

	getch();
 }