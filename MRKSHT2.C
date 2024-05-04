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

	printf("\n Name : %s",nm);
	printf("\n Roll No. : %d",rn);
	printf("\n Standard : %s",std);
	printf("\n --------------------------------------------------");
	printf("\n Sr NO.   Subject   Total Marks    Obtain Mark");
	printf("\n --------------------------------------------------");
	printf("\n   1.     Maths     100            %d",maths);
	printf("\n   2.     Science   100            %d",science);
	printf("\n   3.     English   100            %d",eng);
	printf("\n   4.     Gujarati  100            %d",guj);
	printf("\n   5.     Hindi     100            %d",hindi);
	printf("\n --------------------------------------------------");
	printf("\n \n                                  Total Marks : %d",tm);

	if(maths>=35 && science>=35 && eng>=35 && guj>=35 && hindi>=35)
	{
		printf("\n 				  YUPIEE, You are PASS");
	}
	else
	{
		printf("\n 				  SORRY, You are Fail");
	}

	printf("\n     				  Percentage : %.2f",per);

	if(per>=90)
	{
		printf("\n 				  Grade : A+");
	}
	else if(per>=80)
	{
		printf("\n 				  Grade : A");
	}
	else if(per>=70)
	{
		printf("\n 				  Grade : B+");
	}
	else if(per>=60)
	{
		printf("\n 				  Grade : B");
	}
	else
	{
		printf("\n 				  Grade : C");
	}
	getch();
}