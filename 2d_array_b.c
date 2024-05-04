#include<stdio.h>
	void main()
		{
			int n=3;
			int a[n][n],i,j,c1=0,c2=0,c3=0;

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
			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
				{
					if(a[i][j]>=0)
					{
						if(a[i][j]>0)
						{
							c1=c1+1;
						}
						else
						{
							c3=c3+1;
						}
					}
					else
					{
						c2=c2+1;
					}
					
				}
				
			}
			printf("Positive Number=%d\n",c1);
			printf("Negetive Number=%d\n",c2);
			printf("Zero=%d",c3);


		}