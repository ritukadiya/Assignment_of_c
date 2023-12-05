#include<stdio.h>
main()
{
	int num;
	
	printf("\n\n\t enter a number : ");
	scanf("%d",&num);
	
	(num%2==0)?
	(printf("%d is even number\n",num)) : (printf("%d is odd number\n",num));
}
