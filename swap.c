#include<stdio.h>
    void main()
        {
            int x,y;
            printf("Eenter X:");
            scanf("%d",&x);
            printf("Enter Y:");
            scanf("%d",&y);

            x=x-y;
            y=x+y;
            x=y-x;

            printf("After Swaping x=%d\n",x);
            printf("After Swaping y=%d\n",y);
        }