#include<stdio.h>
	int fact(int);
	void main()
	{
		int n,s=0;
		printf("Enter N:");
		scanf("%d",&n);
		
		printf("Factorial=%d",fact(n));
	}
	int fact(int n)
	{
		

		if(n<=1)
		{
			return n;
		}
		return n*fact(n-1);
	}