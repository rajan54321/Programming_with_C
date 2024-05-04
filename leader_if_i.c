#include<stdio.h>
	void main()
		{
			float s1,s2,s3;

			printf("Enter S1:");
			scanf("%f",&s1);
			printf("Enter S2:");
			scanf("%f",&s2);
			printf("Enter S3:");
			scanf("%f",&s3);

			if(s1==s2  && s2==s3)
			{
				printf("Triangel is Equilateral");
			}
			else if(s1==s2 || s2==s3 || s1==s3)
			{
				printf("Triangel is Isosceles");
			}
			else if((s1*s1)+(s2*s2)==(s3*s3) || (s2*s2)-(s3*s3)==(s1*s1) || (s1*s1)-(s3*s3)==(s2*s2))
			{
				printf("Triangel Is Right Angle");
			}
			else
			{
				printf("Triangle Is Sceles");
			}
		}