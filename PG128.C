#include<stdio.h>
#include<conio.h>

struct student
{
	char name[20];
	int m1,m2,m3,m4,m5,tot;
	float per;
};

void main()
{
	struct student s1;
	printf("\n Enter student name :");
	scanf("%s",s1.name);

	printf("\n Enter marks for five subjects : ");
	scanf("%d%d%d%d%d",&s1.m1,&s1.m2,&s1.m3,&s1.m4,&s1.m5);

	s1.tot = s1.m1 + s1.m2 + s1.m3 + s1.m4 + s1.m5;
	s1.per = (float)s1.tot/5.0;
	printf("\n Total = %d\t  percentage = %f",s1.tot,s1.per);
	getch();
}