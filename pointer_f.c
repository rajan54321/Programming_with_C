#include<stdio.h>
#include<string.h>
    void main()
    {
        int n,i,l=0;
        char s[100];
        char *p;


        printf("Enter a string:");
        gets(s);

        l=strlen(s);
        p=s;

        for (i = 0; i < l; i++)
        {
            printf("\n%c's address: %p\n", *p, p);
            p++;
        }
    }