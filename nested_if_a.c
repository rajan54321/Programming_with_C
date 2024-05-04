#include<stdio.h>
	void main()
		{
			int a,b,c;

			printf("Enter A:");
			scanf("%d",&a);
			printf("Enter B:");
			scanf("%d",&b);
			printf("Enter C:");
			scanf("%d",&c);

			if(a>b)
			{
				if(a>c)
					{
						printf("A Is LArgest");
					}
				else
					{
						printf("C Is LArgest");
					}
			}	
			if(b>a)
			{
				if(b>c)
					{
						printf("b is largest");
					}
				else
					{
						printf("c is largest");
					}
			}	
			

		}