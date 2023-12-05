#include<stdio.h>
#include<string.h>
struct employee
{
	int empno,age;
	char empname[20],address[50];
	
	
}emp;
main()
{
	
		printf("\n\n Enter the empno: ");
		scanf("%d",&emp.empno);
		printf("\n\n Enter the name: ");
		scanf(" %s",emp.empname);
		printf("\n\n Enter the address of the employee : ");
		scanf(" %[\n]",&emp.address);
		printf("\n\n Enter the age of employee: ");
		scanf("%d",&emp.age);
	
	printf("\n\n empno : %d",emp.empno);
	printf("\n\n Emplyoee name : %s",emp.empname);
	printf("\n\n address : %s",emp.address);
	printf("\n\n age : %d",emp.age);
	printf("\n**************************");
	
}
