#include<stdio.h>
main()
{
	int a=10, b=20;
	
	printf("\n\n\t Before swap a=%d, b=%d",a,b);
	
	a=a+b;   //a=30(10+20)
	b=a-b;   //b=10(20-10)
	a=a-b;   //a=20(30-10)
	
	printf("\n\n\t After swap a=%d,b=%d",a,b);
}
