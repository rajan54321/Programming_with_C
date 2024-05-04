#include<stdio.h>
#include<conio.h>
#include<string.h>

struct stud
{
	char name[20];
	float q1,q2,mid,final,tot;
	char grd;
};

int main()
{
	struct stud s[3],tmp;
	int i,j;

	for(i=0;i<3;i++)
	{
		printf("\n =================================");
		printf("\n ENTER DETAIL OF STUDENT %2d",i+1);
		printf("\n =================================");

		printf("\n ENETR NAME :");
		fflush(stdin);
		gets(s[i].name);

		printf("\n ENTER MARKS OF QUIZ 1 : ");
		scanf("%f",&s[i].q1);

		printf("\n ENTER MARKS OF QUIZ 2 : ");
		scanf("%f",&s[i].q2);

		printf("\n ENTER MARKS OF MID : ");
		scanf("%f",&s[i].mid);

		printf("\n ENTER MARKS OF FINAL : ");
		scanf("%f",&s[i].final);

		s[i].tot = (0.15*(s[i].q1 + s[i].q2)) + (0.3*(s[i].mid)) + (0.4*(s[i].final));

		if(s[i].tot >= 0.0 && s[i].tot <= 39.0)
		{
			s[i].grd = 'F';
		}

		if(s[i].tot > 39.0 && s[i].tot <= 54.0)
		{
			s[i].grd = 'D';
		}
	
		if(s[i].tot > 54.0 && s[i].tot <= 79.0)
		{
			s[i].grd = 'C';
		}

		if(s[i].tot > 79.0 && s[i].tot <= 89.0)
		{
			s[i].grd = 'B';
		}

		if(s[i].tot > 89.0 && s[i].tot <= 100.0)
		{
			s[i].grd = 'A';
		}
	}

	for(i=0;i<=3;i++)
	{
		for(j=i+1;j<3;j++)
		{
			if(strcmp(s[i].name,s[j].name)>0)
			{
				tmp = s[i];
				s[i]=s[j];
				s[j]=tmp;
			}
		}
	}

	printf("\n \t\t\t ============================================");
	printf("\n \t\t\t STUDENT DETALIL");
	printf("\n \t\t\t ============================================");

	printf("\n \t ------------------------------------------------");
	printf("\n \t STUDENT\t QUIZ\t QUIZ\t MID\t FINAL\t FINAL\t COURSE");
	printf("\n \t NAME\t\t1\t2\t TERM\t EXAM\t SCORE\t GRADE");
	printf("\n \t ------------------------------------------------");

	for(i=0;i<3;i++)
	{
		printf("\n \t %-10s\t %.2f\t %.2f\t %.2f\t %.2f\t %.2f\t %c",
		s[i].name,s[i].q1,s[i].q2,s[i].mid,s[i].final,s[i].tot,s[i].grd);
	}
	return 0;
}


