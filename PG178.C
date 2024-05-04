#include<stdio.h>
#include<stdio.h>

main()
{
	char*buffer;

	if((buffer = (char*)malloc(10)) == NUll)
	{
		printf("\n malloc failed");
		exit(1);
	}

	printf("\n buffer of size %d created",_sizeof(buffer));
	strcpy(buffer,"banglore");

	printf("\n buffer contains : %s ", buffer);

	if((buffer =(char*)realloc(buffer,15))== NULL)
	{
		printf("\n realloction failed");
		exit(1);
	}

	printf("\n buffer size modified");
	printf("\n buffer still contains : %s");
	strcpy("\n buffer","mysore");

	printf("\n buffer now contains : %s");

	free(buffer)
	getch();
}