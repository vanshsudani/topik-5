#include<stdio.h>

main()
{
	float a,b;
	printf("enter avalue of the first number=");
	scanf("%f", &a);
	
	printf("enter avalue of the first number=");
	scanf("%f", &b);
	
	if(a>b)
	{
		printf("minimum value is=%.2f",b);
	}
	else
	{
		printf("minimum value is=%.2f",a);
	}
}
