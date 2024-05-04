#include<stdio.h>
    void main()
        {
            int n,sum,i;
            sum=1;

            printf("Enter N:");
            scanf("%d",&n);

            for(i=1;i<=n;i++)
            {
                if(n%i==0)
                {
                    printf("%d\n",i);
                }
            }
            
        }