#include<stdio.h>
    void swap(int *,int *);
    void main()
    {
        int a=5,b=3;

        printf("value before swaping\n");
        printf("-------------------------\n");
        printf("a=%d  b=%d\n",a,b);

        swap(&a,&b);

        printf("value after swaping\n");
        printf("-------------------------\n");
        printf("a=%d  b=%d\n",a,b);

    }
    void swap(int *x,int *y)
    {
        int t;
        t = *x;
        *x = *y;
        *y = t;
    }