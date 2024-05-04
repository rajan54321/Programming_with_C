#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 20

int main(void)
{
	static char*names[] = {"Jim","Amy","Mark","Sue",NULL};
	char *find_name(char**,char*);
	char new_name[SIZE],*name_pointer;
	printf("\n Enter name to be searched");
	scanf("%s",new_name);

	name_pointer = find_name(names,new_name);

	printf("\n name %s %s found",new_name,(name_pointer == NULL)?"not":"");
	getch();
}
char *find_name(char **arry,char *strng)
{
	for(*arry != NULL;arry++)
	{
		if(strcmp(*arry,strng)== 0)
		return(*arry);
	}
	return (*arry);
}
