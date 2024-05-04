#include <stdio.h>

    void change_case_to_upr(char[]);
    void main()
    {
        char s[100];
        
        printf("\nEnter a string : ");
        scanf("%s",s);
        change_case_to_upr(s);
    }
    void change_case_to_upr(char s[])
    {
        int i;
        for (i=0;s[i]!='\0';i++)
        {
            if (s[i]>='a' && s[i]<='z')
            {
                s[i]=s[i]-32;
            }
        }
        printf("String in Upper Case = %s", s);
    }