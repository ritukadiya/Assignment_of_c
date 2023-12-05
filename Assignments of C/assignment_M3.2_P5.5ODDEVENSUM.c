/* C Program to find Sum of Even and Odd Numbers */
 
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
			evennum=evennum+i;
		}
		else
		{
			oddnum=oddnum+i;
		}
		i++;
	}
	printf("sum of even numbers %d=%d \n", num,evennum);
	printf("sum of odd numbers: %d=%d \n",num,oddnum);
	
}
