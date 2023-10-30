#include<stdio.h>
main()
{
	int year;
	
	printf("\n\t Enter a year : ");
	scanf("%d",&year);
	
	if(year % 400== 0)
	{
		printf("\n\t %d This year is a leap year",year);
	}
	else if(year % 100== 0)
	{
		printf("\n\t %d This year is not a leap year",year);
	}
	else if(year % 4== 0)
	{
		printf("\n\t  %d This year is a leap year ",year);
	}
	else
	{
		printf("\n\t  %d This year is not a leap year",year);
	}
}
