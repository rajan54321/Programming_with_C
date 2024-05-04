#include<stdio.h>
#include<conio.h>

void main()
{
	FILE*fp1,*fp2,*fp3;
	int no = 0,i;

	printf("\n Enter Value : ");
	fp1 = fopen("NUMBERS.TXT","w");
	while(no != 9999)
	{
		scanf("%d",&no);
		putw(no,fp1);
	}
	fclose(fp1);
	fp1 = fopen("NUMBERS.TXT","r");
	fp2 = fopen("NODD.TXT","w");
	fp3 = fopen("NEVEN.TXT","w");
	while((no =getw(fp1)) != EOF)
	{
		if(no % 2 == 0)
			putw(no,fp3);
		else
			putw(no,fp2);
	}
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	fp2 = fopen("NODD.TXT","r");
	fp3 = fopen("NEVEN.TXT","r");
	printf("\n List of ODD number is : ");

	while((no =getw(fp2)) != EOF)
		printf("%d",no);
	printf("\n List of EVEN No.s is");
	while((no =getw(fp3)) != EOF)
		printf("%d",no);
	fclose(fp2);
	fclose(fp3);
	getch();
}