#include <stdio.h>
    void main()
        {
            int a[5],i,j;
            float total,average,sum;
            for (i = 1; i <= 5; i++)
            {
                printf("Enter marks for %d student:\n", i);
                sum = 0;
                for (j = 0; j < 3; j++)
                {
                    printf("a[%d]: ", i);
                    scanf("%d", &a[i]);
                    sum=sum+a[i];
                }
            }
            total=sum;
            average = (float)(sum/ 3);
            for (i = 1; i <= 5; i++)
            {
                printf("\nStudent::%d --> Total = %f\t|\tAverage =%.2f\n", i, total, average);
            }
            printf("\n");
        }