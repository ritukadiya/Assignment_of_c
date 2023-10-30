/*
1
2 3
4 5 6 
7 8 9 10*/

#include <stdio.h>
main()
{
	int rows,i,j,k,n=1;
	
	printf("\n\t Enter a number of rows : ");
	scanf("%d",&rows);
	
	for(i=0;i<rows;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf(" %d",n++);
		}
		printf("\n");
	}
}
