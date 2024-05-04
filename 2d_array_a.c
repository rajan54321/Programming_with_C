#include<stdio.h>
	void main()
		{
			int n=3;
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

		}