#include<stdio.h>
#include<conio.h>

void main()
{
	int m1,m2,m3,m4,m5,tot;
	float per;
	char grade,yn;

	do
	{
		clrscr();
		printf("\n enter marks for five subjects :");
		scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
		tot = m1 + m2 + m3 + m4 + m5;

		per = tot/5.0;
		if(per >= 70)
			grade = 'A';
		else if(per >= 60)
			grade = 'B';
		else if(per >= 50)
			grade = 'C';
		else if(per >= 35)
			grade = 'D';
		else
			grade = 'F';
		printf("\n Total Marks : %d",tot);
		printf("\n Percentage : %f",per);
		printf("\n Grade : %c",grade);
		printf("\n Do you want to continue ?(y/n)");
		yn = getche();
	}while(yn == 'Y' || yn == 'y');

	printf("\n End of Programming");
	getch();
}