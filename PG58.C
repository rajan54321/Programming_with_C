#include<stdio.h>
#include<conio.h>

void main()
{
	int ch;
	char yn;

	do
	{
		printf("\n which is the longest river in the world");
		printf("\n 1. Ganga 2. Nile 3. Amazon 4. Mississippi");
		printf("\n Enter your choice(1-4) :");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:
			{
				printf("\n Ganga is not an answer");
				break;
			}
		case 2:
			{
				printf("\n Your answer is correct");
				yn = 'n';
				break;
			}
		case 3:
			{
				printf("\n Amazon is not an answer");
				break;
			}
		case 4:
			{
				printf("\n Mississipi is not an answer");
				break;
			}
		default:
			{
			printf("\n You have selected wrong choice");
			break;
			}
		}
		if(ch!=2)
		{
			printf("\n You have selected wrong choice");
			yn= getche();
		}
	}while(yn == 'Y'|| yn == 'y');
	getch();
}









