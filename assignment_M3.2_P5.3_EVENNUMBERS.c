#include<stdio.h>
main()
{
	int i,num,evennum=0, oddnum=0;
	printf("enter the 10 numbers:\n");
	
	while(i < 10)
	{
		scanf("%d",&num);
		
		if(num % 2== 0)
		{
			evennum++;
		}
		else
		{
			oddnum++;
		}
		i++;
	}
	printf("number of even numbers: %d\n", evennum);
	printf("number of odd numbers: %d\n",oddnum);
	
}
