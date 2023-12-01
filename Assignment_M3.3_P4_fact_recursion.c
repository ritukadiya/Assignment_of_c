#include<stdio.h>
#include<stdlib.h>
main()
{
	int i,n,fact,flag;
	printf("\n\n Enter the number whose Factorial You want :");
	scanf("%d",&n);
	
	if(n>=1)
	{
		goto factorial;
		flag=1;
	}
	else
	{
	printf("\n\n You entered negative number or zero!!!!...");
	}
	if(flag==1)
	{
	factorial:	
	for(i=1;i<=n;i++)
	{
		fact*=i;
	}
	printf("\n\n Factorial of a %d = %d ",n,fact);
	}
}
