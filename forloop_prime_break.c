#include<stdio.h>
    void main()
        {
            int i,n,flag;
         
            flag=0;
           

            printf("Enter N:");
            scanf("%d",&n);

            while(i=2;i<n;i++)
            {
                if(n%i==0)
                {
                   flag=1;
                    break;
                   
                }
               
              
            }
            if(flag==0)
            {
             printf("%d is prime",n);
            }
            else
            {
            printf("%d is not prime",n);
            }
            
        }