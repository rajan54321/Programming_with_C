#include<stdio.h>
	void main ()
	{
		float bs,hra,da,gs;

		printf("Enter Basic Salary:");
		scanf("%f",&bs);

		if(bs>=10000)
			{
				hra=bs*0.20;
				da=bs*0.80;
				gs=hra+da+bs;
			}
		if(bs>=20000 && bs<=30000)
			{
				hra=bs*0.25;
				da=bs*0.85;
				gs=bs+hra+da;
			}
		if(bs>=30000)
			{
				hra=bs*0.30;
				da=bs*0.90;
				gs=bs+hra+da;
			}
		printf("gross salary:%f",gs);
	}