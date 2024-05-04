#include<stdio.h>
    void main()
    {
        int a,b,*x,*y;

        printf("Enter A,B:");
        scanf("%d%d",&a,&b);

        x=&a;
        y=&b;

        printf("sum of %d and %d=%d",a,b,*x+*y);
    }