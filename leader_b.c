#include<stdio.h>
	void main()
		{
			int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,max,min;

			printf("Enter 10 Number(Using Space):");
			scanf("%d%d%d%d%d%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10);

			max=n1;
			min=n1;

			if(n2>max)
			{
				max=n2;
			}
			else if(n3>max)
			{
				max=n3;
			}
			else if(n4>max)
			{
				max=n4;
			}
			else if(n5>max)
			{
				max=n5;
			}
			else if(n6>max)
			{
				max=n6;
			}
			else if(n7>max)
			{
				max=n7;
			}
			else if(n8>max)
			{
				max=n8;
			}
			else if(n9>max)
			{
				max=n9;
			}
			else
			{
				max=n10;
			}


			if(n2<min)
			{
				min=n2;
			}
			else if(n3<min)
			{
				min=n3;
			}
			else if(n4<min)
			{
				min=n4;
			}
			else if(n5<min)
			{
				min=n5;
			}
			else if(n6<min)
			{
				min=n6;
			}
			else if(n7<min)
			{
				min=n7;
			}
			else if(n8<min)
			{
				min=n8;
			}
			else if(n9<min)
			{
				min=n9;
			}
			else
			{
				min=n10;
			}

			printf("\n%d is max\n",max);
			printf("\n%d is min\n",min);		
		}