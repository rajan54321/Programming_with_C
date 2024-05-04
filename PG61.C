#include<stdio.h>
#include<conio.h>

void main()
{
	int no;
start:
	printf("\n Enter a no.");
	scanf("%d",&no);

	if(no<0)
		goto start;
	if(no== 0)
		printf("\n No. is Zero");
	else
	{
		if(no >0)
		printf("\n No. is Positive");
		else
		printf("\n No. is Negative");
	}
	getch();
}