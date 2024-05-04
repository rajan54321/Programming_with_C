#include<stdio.h>
	void main()
		{
			int i,n,ln,temp=0;
			

			printf("Enter N:");
			scanf("%d",&n);

			ln=n%10;
			n=n/10;

			for(i=1;n/10>0;)
			{
				n=n/10;
			}
			temp=ln+n;
			printf("sum=%d",temp);

		}
