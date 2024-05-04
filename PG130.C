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
	struct student s[20];
	int i;
	for(i=0,i<=19;i++)
	{
		printf("\n Enter details for student %d",i+1);
		printf("\n");
		printf("\n Enter Student Name : ");
		scanf("%d%d%d%d%d",&s[i].m1,&s[i].m2,&s[i].m3,&s[i].m4,&s[i].m5);

		s[i].tot = s[i].m1 +s[i].m2 +s[i].m3 +s[i].m4 +s[i].m5;
		s[i].per = (float)s[i].tot/5.0;
	}
	for(i=0;i<=19;i++)
	{
		printf("\n Student Name : %s",s[i]name);
		printf("\n Total Marks : %d\t Percentage : %f",s[i].tot,s[i].per);
	}
	getch();
}