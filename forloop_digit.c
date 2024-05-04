#include<stdio.h>
    void main()
        {
            int i,n;

            printf("Enter Number:");
            scanf("%d",&n);

            for(;n!=0;)
            {
                i=n%10;
                printf("%d\n",i);
                n=n/10;

                if(n==0)
                break;
            }
        }