#include<stdio.h>
    void main()
        {
            int i,n,sum;
            sum=0;

            printf("Enter Number:");
            scanf("%d",&n);

            for(;n!=0;)
            {
                i=n%10;
                sum=sum+i;
                n=n/10;
            }
            printf("sum=%d",sum);
        }