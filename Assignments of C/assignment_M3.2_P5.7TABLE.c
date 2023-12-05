#include<stdio.h>
main()
{
	int i,num;
	
	printf("\n\t enter a number to print table :");
	scanf("%d",&num);
	
	
	for(i=1;i<=10;i++)
	{
		printf("\n\t %d * %d = %d",num,i,(num*i));	
	}
}
