#include<stdio.h>
#include<conio.h>

void main()
{
	char nm[30];
	int rn;
	char gen;
	float ht;
	clrscr();

	printf("\n Enter Name :");
	scanf("%s",nm);
	printf("\n Enter Roll No. :");
	scanf("%d",&rn);
	fflush(stdin);
	printf("\n Enter Gender(M/F) :");
	scanf("%c",&gen);
	printf("\n Enter Heigth :");
	scanf("%f",&ht);
	clrscr();
	printf("\n Name : %s",nm);
	printf("\n Roll No. : %d",rn);
	printf("\n Gender : %c",gen);
	printf("\n Height : %.2f",ht);
	if(maths>=35 && science>=35 && eng>=35 && guj>=35 && hin>=35)
	{	
				printf("\n YUPIEE, You are PASS");
	}
	else
	{
		printf("\n SORRY, You are Fail");
	}
	getch();
}
