#include<stdio.h>
void main()
{
	int n,fn,ln,sum;
    sum=0;

    printf("Enter N:");
    scanf("%d",&n);

    ln=n%10;

    for(;n>=10;)
    {
        n=n/10;
    }
    fn=n;
    sum=fn+ln;
    printf("Sum=%d\n",sum);
}