#include<stdio.h>
    void main()
        {
            int n;
            printf("Enter Array Size:");
            scanf("%d",&n);

            int a[n],i,avg,count=0,sum=0;

            for(i=0;i<n;i++)
            {
                printf("a[%d]:",i);
                scanf("%d",&a[i]);
                
                sum=sum+a[i];
            }
            avg=(float)sum/n;
            for(i=0;i<n;i++)
            {
                if(a[i]>avg)
                {
                    count=count+1;
                }
            }
            printf("Avrage=%d\n",avg);
            printf("Number Greater Than Avg.:%d",count);
        }