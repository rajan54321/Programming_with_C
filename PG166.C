#include<stdio.h>
#include<conio.h>

void main()
{
	FILE*fp;
	int number,quantity,i;
	float price,value;
	char item[10],filename[10];

	printf("Enter Input filename : ");
	scanf("%s",filename);

	fp = fopen(filename,"w");

	printf("Input Inventory Data \n\n");
	printf("Item name Number price Quantity\n");

	for(i=1;i<=3;i++)
	{
		scanf("%s %d %f %d",item,&number,&price,&quantity);
		fprintf(fp,"%s %d %0.2f %d",item,number,price,quantity);
	}
	fclose(fp);
	printf("\n\n"); //or you can write fprintf(stdout,"\n\n");
	fp = fopen(filename,"r");
	printf("Item name Number Price Quantity value\n");

	for(i=1;i<=3;i++)
	{
		fscanf(fp,"%s %d %f %d",item,&number,&price,&quantity);
		value = price *quantity;
		fprintf(stdout,"%-8s %7d %8.2f %8d %11.2f\n",item,number,price,quntity,vlaue);
	}
	fclose(fp);
	getch();
}
