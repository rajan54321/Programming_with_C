#include<stdio.h>
#include<conio.h>

void main()
{
	int i;
	float no,sum,avg;
	clrscr();

	printf("\n Enter values one by one :");
	printf("\n Enter zero to stop entry :");
	sum = 0;

	for(i=1; i<= 1000;i++)
	{
		scanf("%f",&no);

		if(no == 0)
		 break;

		 sum = sum +no;
	}

	avg = sum/(float)(i-1);

	printf("\n Sum: %f", sum);
	printf("\n Average : %f", avg);
	getch();
}