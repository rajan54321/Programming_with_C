#include<stdio.h>
#include<conio.h>

void avg(int,int);
void main()
{
        int a,b;

        printf("\n Enter two values : ");
        scanf("%d%d",&a,&b);
        avg(a,b);
        getch();
}

void avg(int x,int y)
{
        float z;
        z= (float)x +(float)y/2.0;
        printf("\n Average is : %f",z);
}

