#include<stdio.h>
#include<conio.h>

main(int argc,char*argv[])
{
	FILE*fp;
	char ch;
	int line=0;

	if(argc != 2)
	{
		printf("\n Required parameter missing.....");
		printf("\n Help : mydel<fie name>\n");
		exit(1);
	}

	fp = fopen(argv[1],"r");

	if(fp == NULL)
	{
		printf("\n File not found - %s\n",argv[1]);
		exit(1);
	}

	remove(argv[1]);

	fclose(fp);
	getch();
}