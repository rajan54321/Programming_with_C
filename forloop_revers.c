#include <stdio.h>
    void main()
        {
            int n, i;
            printf("Enter a number: ");
            scanf("%d", &n);
            for(;n!=0;)
            {
                i=n%10;
                printf("%d",i);
                n/=10;
            }

        }
