#include<stdio.h>
	void main()
		{
			int a[20][2],i;

			for(i=0;i<20;i++)
			{
				printf("Enter RollNo.:");
				scanf("%d",&a[i][0]);

				printf("Enter Marks:");
				scanf("%d",&a[i][1]);

			}
			for(i=0;i<20;i++)
			{
				printf("%d=%d\n",a[i][0],a[i][1]);
			}
		}