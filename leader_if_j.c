#include<stdio.h>
#include<math.h>
	void main()
		{
			float a,b,c,d,r1,r2,r3,r4,x,y;

			printf("Enter A:");
			scanf("%f",&a);
			printf("Enter B:");
			scanf("%f",&b);
			printf("Enter C:");
			scanf("%f",&c);

			d=(b*b)-(4*a*c);

			if(d>0)
			{
				r1=(-b+sqrt(d))/(2*a);
				r2=(-b-sqrt(d))/(2*a);

				printf("Root1=%f and Root2=%f",r1,r2);
			}

			if(d==0)
			{
				r1=r2=-b/(2*a);
				printf("Root1=Root2=%f",r1);
			}

			if(d<0)
			{
				x=-b/(2*a);
				y=sqrt(-d)/(2*a);

				printf("Root1=%f+i%f and Root2=%f-i%f",x,y,x,y);
			}
		}