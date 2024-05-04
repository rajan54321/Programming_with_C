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
	struct student *s[50];
	int count=0,i;
	char yn;
	clrscr();

	do
	{
		s[count] = malloc(sizeof(struct student));

		printf("\n Enter details for students %d",count +1);
		scanf("%s",s[count]-> name);
		printf("\n Enter marks for five subjects :");
		scanf("%d%d%d%d%d",&s[count]->m1,&s[count]->m2,&s[count]->m3,&s[count]->m4,&s[count]->m5);

		s[count]-> tot = s[count]->m1 +s[count]->m2 +s[count]->m3 +s[count]->m4 +s[count]->m5;

		s[count]-> per = s[count]->tot/5.0;

		printf("Total Marks : %d Percentage : %.2f",s[count]->tot,s[count]->per);
		if(count < 49)
		{
			printf("\n Do you want to enter details for next students\?");
			yn = getche();
		}
		count++;
	}while((yn == 'y' || yn == 'Y')&&count <= 49);
	getch();
}

