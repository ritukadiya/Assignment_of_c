#include<stdio.h>
#include<stdlib.h>
main()
{
	int a[3][3],b[3][3],c[3][3],i,j,k,sum,choice;
		
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("\n\n a[%d][%d] = ",i,j);
		scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("\n\n b[%d][%d] = ",i,j);
		scanf("%d",&b[i][j]);
		}
	}
	
	printf("*****************************");
	while(1)
	{
	
	printf("\n 1.Traverse \n 2.Addition \n 3.Subtraction \n 4.Multiplication \n 5.Exit");
	
	printf("\n\n Enter your Choice :");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:printf("\n\n Matrix 1 \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf(" %d",a[i][j]);
		}
		printf("\n");
	}
	printf("*****************************");
	printf("\n\n Matrix 2 \n");
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf(" %d",b[i][j]);
		}
		printf("\n");
	}
	printf("*****************************");
			break;
		case 2:
		for(i=0;i<3;i++)
		{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		
		}
		} 
		printf("\n Sum of element of both arrays \n");
		printf("\n");
		for(i=0;i<3;i++)
		{
		for(j=0;j<3;j++)
		{
			printf(" %d",c[i][j]);
		}
		printf("\n");
		}
		break;
		case 3:
		for(i=0;i<3;i++)
		{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]-b[i][j];			
		}
		}
		printf("\n Sub of element of both arrays \n");
		for(i=0;i<3;i++)
		{
		for(j=0;j<3;j++)
		{
			printf(" %d",c[i][j]);
		}
		printf("\n");
		}
		break;
		case 4:
		for(i=0;i<3;i++)
		{
		for(j=0;j<3;j++)
		{
			sum=0;
			for(k=0;k<3;k++)
			{
				sum=sum+a[i][k]*b[k][j];
				c[i][j]=sum;
			}
		}
		}
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
			printf(" %d",c[i][j]);
			}
		printf("\n");
		}
		break;
		case 5: printf("\n\n You exited!!!....");
		exit(0);
		break;
	}
}

		
}
