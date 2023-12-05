#include<stdio.h>
main()
{
	int i,j,a[5],temp,choice;
	for(i=0;i<5;i++)
	{
		printf("\n\n a[%d]= ",i);
		scanf("%d",&a[i]);
	}
	printf("\n******************************");
	printf("\n\n 1.Ascending Order \n\n 2.Descending Order \n\n*************************");
	printf("\n\n Enter the choice you want :");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1: 
		for(i=0;i<5;i++)
		{
			for(j=i+1;j<5;j++)
			{
				if(a[i]>a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
		printf("\n\n Ascending order :");
		for(i=0;i<5;i++)
		{
			printf(" %d ",a[i]);
		}
		
		case 2:
		for(i=0;i<5;i++)
		{
			for(j=i+1;j<5;j++)
			{
				if(a[i]<a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
		printf("\n\n Descending order :");
		for(i=0;i<5;i++)
		{
			printf(" %d ",a[i]);
		}
	}
}
