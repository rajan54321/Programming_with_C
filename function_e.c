#include<stdio.h>
    int isprime(int);
    void main()
    {
        int n;
        printf("Enter N:");
        scanf("%d",&n);

        if(isprime(n)==0)
        {
            printf("Number Is Not Prime");
        }
        else{
            printf("Number Is Prime");
        }
        
    }
    int isprime(int n)
    {
        int i;
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
    }