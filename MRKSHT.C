#include<stdio.h>
#include<conio.h>

void main()
{
	char nm[30];
	int rn,maths,science,guj,eng,hindi,tm;
	char std[20];
	float per;
	clrscr();

	printf("\n Enter your Name : ");
	scanf("%s",nm);
	printf("\n Enter your Roll No. : ");
	scanf("%d",&rn);
	printf("\n Enter your Standard : ");
	scanf("%s",std);

	printf("\n Mark of MATHS : ");
	scanf("%d",&maths);
	printf("\n Mark of SCIENCE : ");
	scanf("%d",&science);
	printf("\n Mark of ENGLISH : ");
	scanf("%d",&eng);
	printf("\n Mark of GUJARATI : ");
	scanf("%d",&guj);
	printf("\n Mark of HINDI : ");
	scanf("%d",&hindi);
	clrscr();

	tm=maths+science+eng+guj+hindi;
	per=tm/5;

	printf("\n Name = %s",nm);
	printf("\n Total Marks = %d",tm);
	printf("\n Percentage = %.2f",per);

	if(maths>=35 && science>=35 && eng>=35 && guj>=35 && hindi>=35)
	{
		printf("\n YUPIEE, You are PASS");
	}
	else
	{
		printf("\n SORRY, You are Fail");
	}
	if(per>=90)
	{
		printf("\n Grade = A+");
	}
	else if(per>=80)
	{
		printf("\n Grade = A");
	}
	else if(per>=70)
	{
		printf("\n Grade = B+");
	}
	else if(per>=60)
	{
		printf("\n Grade = B");
	}
	else
	{
		printf("\n Grade : C");
	}
	getch();
}
