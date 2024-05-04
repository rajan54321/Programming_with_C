#include<stdio.h>
	void main()
		{
			int n=3;
			int a[n][n],b[n][n],i,j,sum[n][n];

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
					printf("b[%d][%d]:",i,j);
					scanf("%d",&b[i][j]);
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
					printf("%d\t",b[i][j]);
					
				}
				printf("\n");
			}
			printf("\n");
			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
				{
					
					sum[i][j]=a[i][j]+b[i][j];
					printf("%d\t",sum[i][j]);
				}

				printf("\n");
			}


		}