#include<stdio.h>
    void fibbo(int);
    void main()
    {
        int n;
        printf("Enter N:");
        scanf("%d",&n);
        fibbo(n);
    }
    void fibbo(int n)
    {
        int i,sum,a=0,b=1;
        printf("%d\t%d\t",a,b);
        for(i=1;i<=n-1;i++)
        {
            sum=a+b;
            printf("%d\t",c);
            a=b;
            b=sum;
        }
    }