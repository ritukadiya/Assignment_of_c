/*
A
B C
D E F 
G H I J
K L M N O
*/
#include <stdio.h>
main()
{
	int rows,i,j;
	char c = 'A';

	printf("Enter the rows of the pattern: ");
	scanf("%d", &rows);

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%c ", c);
			c++;
		}
		printf("\n");
	}
}

