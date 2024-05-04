#include<stdio.h>
    void main()
        {
            int i,n,sum;
            sum=0;
     
            printf("Enter N:");
            scanf("%d",&n);

            for(i=1;i<n;i++)
            {
                if(n%i==0)
                {
                    sum=sum+i;
                    printf("factor=%d\n",i);
                }
              
            }
            if(sum==n)
            {
                printf("%d is perfect",n);
            }
            else
            {
                printf("%d is not perfect",n);
            }
        }
