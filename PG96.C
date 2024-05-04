#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
        char str1[20],str2[20],str3[40];
        int ch,diff,len1,len2;
        clrscr();

        do
        {
                printf("\n Enter first string :");
                scanf("%s",str1);
                printf("\n Enter second string :");
                scanf("%s",str2);

                printf("1 Length of strings : ");
                printf("\n2 Comparision of strings : ");
                printf("\n3 Concatenation of strings : ");
                printf("\n4 Copy a string ");
                printf{"\n5 Exit"};
                printf("\n Enter choice(1-5);");
                scanf("%d",&ch);

                switch(ch)
                {
                case 1:
                     {
                        len1 = strlen(str1);
                        len2 = strlen(str2);
                        printf("\n Lengths of both strings are %d and %d",len1,len2);
                        break;
                     }
                case 2:
                {
                        diff = strcmp(str1,str2);
                        if(diff == 0)
                        {
                                printf("\n Both string are equal");
                        }
                        else
                        {
                                printf("\n Both string are not equal");
                        }
                        break;
                }
                case 3 :
                {
                        strcat(str1,str2);
                        printf("\n Contcated string is : %s",str1);
                        break;
                }
                case 4 :
                {
                        strcpy(str1,str2);
                        printf("\n string2 is copied  into string");
                        printf("\n copied strong is : %s",str2);
                        break;
                }
                case 5 :
                {
                        printf("\n End of program ");
                        exit(0);
                }

                default :
                {
                        printf("\n Wrong choice");
                        break;
                }
            }
       }while(ch != 5);
        getch();
}