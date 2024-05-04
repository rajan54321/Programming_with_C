#include<stdio.h>
    int  exchangex(int,int);
    int  exchangey(int,int);
    void main()
        {
            int x,y;
            printf("Eenter X:");
            scanf("%d",&x);
            printf("Enter Y:");
            scanf("%d",&y);
            printf("X=%d\n",exchangex(x,y));
            printf("Y=%d",exchangey(x,y));
        }
    int exchangex(int x,int y)
    {
            x=x-y;
            y=x+y;
            x=y-x;

           return x;
    }
     int exchangey(int x,int y)
    {
            x=x-y;
            y=x+y;
            x=y-x;

           return y;
    }