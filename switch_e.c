#include<stdio.h>
	void main()
		{
			int n;

			printf("Enter Month Number:");
			scanf("%d",&n);

			switch(n)
			{
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:
					printf("%d Month Has 31 Days",n);
					break;
				case 4:
				case 6:
				case 9:
				case 11:
					printf("%d Month Has 30 Days",n);
					break;
				case 2:
					printf("%d Month Has 28 OR 29",n);
			}
		}