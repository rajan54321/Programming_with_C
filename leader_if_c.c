#include<stdio.h>
	void main()
		{
			char ch;

			printf("Enter Character:");
			scanf("%c",&ch);

			if(ch>=65 && ch<=91)
			{
				printf("%c is Capital Character",ch);
			}
			else if(ch>=97 && ch<=122)
			{
				printf("%c is Lower Character",ch);
			}
			else if(ch>=48 && ch<=57)
			{
				printf("%c Is Digit",ch);
			}
			else
			{
				printf("%c Is special Character",ch);
			}

		}