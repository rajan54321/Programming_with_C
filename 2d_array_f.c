#include<stdio.h>
    void main()
        {
            int n;
            printf("Enter N:");
            scanf("%d",&n);

            int a[n][n],b[n][n],multi[n][n],c[n][n],d=0,i,k,j,sum;

            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
               { 
                    printf("a[%d][%d]:",i,j);
                    scanf("%d",&a[i][j]);
               }
            }
             printf("\n");
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
                    printf("b[%d][%d]:",i,j);
                    scanf("%d",&b[i][j]);
               }
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
             printf("Multiplication of  Matrix=\n");
              
            for(i=0;i<n;i++)
            {
                
                for(j=0;j<n;j++)
                {
                    c[i][j]=0;
                    for(k=0;k<n;k++)    
                    {    
                        c[i][j]= c[i][j]+a[i][k]*b[k][j];
                    }
                    printf("%d\t",c[i][j]);
                   
                }
                printf("\n");
            }

           
        }