#include<stdio.h>
    void main()
        {
            int num[5],count=0,i;
            float h[5],w[5];

            for(i=0;i<5;i++)
            {
                printf("Enter H[%d]:",i);
                scanf("%f",&h[i]);
                printf("Enter W[%d]:",i);
                scanf("%f",&w[i]);

                if(h[i]>170 && w[i]<50)
                {
                    count=count+1;
                }
            }
            printf("nPerson with height > 170 and weight < 50 are:%d",count);
        }