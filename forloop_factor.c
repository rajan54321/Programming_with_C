#include<stdio.h>
    void main()
        
        {
            int i,n,sum;
            

            printf("Enter Number:");
            scanf("%d",&n);

            for(i=1;i<=n;i++)
            {
                if(n%i==0)
                {
                    printf("%d\n",i);
                }
                
            }
           
        }