#include<stdio.h>
#include<conio.h>

void main(int argc,char*argv[])
{
	FILE*fp;
	char ch;
	int nol=1,not=0,nos=0,noc=0;

	if(argc != 2)
	{
		printf("\n Required parameter missing....... ");
		printf("\n Help : file1<file name>\n");
		exit(1);
	}

	fp = fopen (argv[1],"r");

	if(fp == NULL)
	{
		printf("\n File not found - %s\n",argv[1]);
		exit(1);
	}

	while(1)
	{
		ch = fgetc(fp);

		if(ch == EOF)
			break;

			noc++;

		if(ch == ' ')
			nos++;

		if(ch == '\n')
			nol++;

		if(ch == '\t')
			not++;
	}
	fclose(fp);

	printf("\n \t NUMBER OF CHARACTERS : %d",noc);
	printf("\n \t NUMBER OF SPACES : %d",nos);
	printf("\n \t NUMBER OF TABS : %d",not);
	printf("\n \t NUMBER OF LINES : %d\n",nol);
}