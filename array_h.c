#include<stdio.h>
#include<math.h>
    void main()
        {
            int n;
            printf("Enter Array Size:");
            scanf("%d",&n);
            int num[n],i;
            float am,hm,gm,sum=0.0;
            for(i=0;i<n;i++)
            {
                printf("num[%d]:",i);
                scanf("%d",&num[i]);

                sum=sum+(float)num[i];
            }
            am=sum/n;
            hm=n/sum;
            gm=pow(sum,(float)1/n);


            printf("Arithmetic Mean:%f\n",am);
            printf("Harmonic Mean:%f\n",hm);
            printf("Geometric Mean:%f\n",gm);
        }