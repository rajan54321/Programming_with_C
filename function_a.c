#include<stdio.h>
	float intrest(float,float,float);
	void main()
	{
		float p,r,n;

		printf("Enter P,R,N:");
		scanf("%f%f%f",&p,&r,&n);
		printf("intrest=%f",intrest(p,r,n));

	}
	float intrest(float p,float r,float n)
	{
		return (p*r*n)/100;
	}