#include<stdio.h>
	void main()
		{
			int n;
			printf("Enter N:");
			scanf("%d",&n);
			int a[n][n],i,j;

			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
				{
					printf("a[%d][%d]:",i,j);
					scanf("%d",&a[i][j]);
				}

			}
			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
				{
					printf("%d\t",a[i][j]);
					
				}
				printf("\n");
			}

			printf("\n");

			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
				{
					printf("%d\t",a[j][i]);
					
				}
				printf("\n");
			}
		}