#include<stdio.h>
#include<conio.h>

void main()
{
	FILE*fp1;
	char ch;
	printf("Data Input \n\n");
	fp1 = fopen("DATA.TXT","w");

	while((ch = getch())!=EOF)
	{
		putc(ch,fp1);
	}
		fclose(fp1);
		printf("\n File Contents are stored as under");
		fp1 = fopen("DATA.TXT","r");

		while((ch = getchar(fp1))!= EOF)
		{
			printf("%c",ch);
		fclose(fp1);
		}
		getch();
}
