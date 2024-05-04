#include <stdio.h>
#define N 100
    void sort(int *, int);
    void main()
    {
        int n, arr[N];
        int i, *p;
        printf("Enter size of an array: ");
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            printf("Enter arr[%d]: ", i);
            scanf("%d", &arr[i]);
        }
        printf("\nElements of an array are: \n ");
        for (i = 0; i < n; i++)
        {
            printf("%d, ", arr[i]);
        }
        printf("\n");
        p = arr;
        sort(p, n);
        printf("\nElements of an array after sorting are: \n ");
        for (i = 0; i < n; i++)
        {
            printf("%d, ", arr[i]);
        }
        printf("\n");
    }
    void sort(int *p, int n)
    {
        int i, j, t;
        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (*(p + j) < *(p + i))
                {
                    t = *(p + i);
                    *(p + i) = *(p + j);
                    *(p + j) = t;
                }
            }
        }
    }