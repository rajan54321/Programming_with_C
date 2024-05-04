#include<stdio.h>
void main()
{
	
	int n,sum,a,b;
	sum=0;
	printf("Enter NUMBER=");
	scanf("%d",&n);
	a=n%10;
	for(;n>=10;)
	{
		
		n=n/10;
	
	}
	b=n;
	   sum=a+b;
	printf("%d",sum);

}