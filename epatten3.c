#include<stdio.h>
    void main()
        {
            int i,j,n,x;
            float fact,div,pow,sum;
            sum=1.0;

            printf("Enter N:");
            scanf("%d",&n);
            printf("Enter X:");
            scanf("%d",&x);
            
            for(i=1;i<=n;i++)
            {
                fact=1.0;
                pow=1.0;
                for(j=1;j<=i;j++)
                {
                    fact=fact*j;
                    pow=pow*x;
                }
                div=pow/fact;
                sum=sum+div;
            }
            printf("e^x=%f",sum);
        }