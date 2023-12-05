#include<stdio.h>
main()
{
	int n,reminder,reverse;
	
	printf("\n\n enter a number : ");
	scanf("%d",&n);
	
	reverse=0;
	while(n!=0)
	{
		reminder=n%10;
		reverse=reverse*10+reminder;
		n/=10;
	}
	printf("reversed number = %d",reverse);
	
}
