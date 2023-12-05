#include<stdio.h>
main()
{
	int P, R, T, Interest;
	
	printf("\n\n Enter the principle : ");
	scanf("%d",&P);
	
	printf("\n\n Enter the rate : ");
	scanf("%d",&R);
	
	printf("\n\n Enter the time : ");
	scanf("%d",&T);
	
	Interest=(P*R*T)/100;
	printf("\n\n The simple interest :%d",Interest);
}
