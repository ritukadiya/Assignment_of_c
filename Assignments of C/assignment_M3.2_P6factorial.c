#include<stdio.h>
main()
{
	int i,fact=1,num;
	
	printf("\n Enter a number : ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		fact=(fact*i);
	}
	printf("Factorial is %d is : %d",num,fact);
}
