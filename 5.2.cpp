#include<stdio.h>

main()
{
	float a;
	printf("enter any number=");
	scanf("%f" ,&a);
	
	if(a>0)
	{
		printf("this number is positive",a);
	}
	else if(a==0)
	{
		printf("this number is neutral",a);
	}
	else 
	{
		printf("this number is negative ",a);
	}
	
}
