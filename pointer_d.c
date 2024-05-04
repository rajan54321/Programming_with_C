#include<stdio.h>
     int sum(int *,int );
    void main()
    {
        int arr[100],n,i,*p,csum=0;

        printf("enter size of arr:");
        scanf("%d",&n);

        for(i=0;i<n;i++)
        {
            printf("enter arr[%d]:",i);
            scanf("%d",&arr[i]);
        }

        printf("\nElements of an array are: \n {");

        for (i = 0; i < n; i++)
        {
            printf("%d, ", arr[i]);
        }

        printf("}\n");

        p = arr;
        csum = sum(p, n);

        printf("\n\nSum of the elements of an array is: %d\n\n",
        csum);
        
    }
        int sum(int *p,int n)
        {
            int i, csum = 0;
            for (i = 0; i < n; i++)
            {
                csum += *p;
                p++;
            }
            return csum;
        }