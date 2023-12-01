#include<stdio.h>
main()
{
	int a[20],i,size,max;
	printf("Enter the size of array: ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<size;i++)
	{
		if (max < a[i])
		{
			max=a[i];
		}
	}
	printf("\n maximum number of array is : %d",max);
}
