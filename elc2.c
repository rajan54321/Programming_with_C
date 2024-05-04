#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i, j,size,k;
    printf("Enter string:");
    scanf("%s", &str);

    for(i=0;i<strlen(str);)
    {
        for(j=0;j<str[i+1]-'0';j++)
        {
            printf("%c",str[i]);
        }
        i=i+2;
    }
    
    

    return 0;
}