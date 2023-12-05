//find area of circle ,rectangle, triangle

#include<stdio.h>
main()
{
	int r;
	float pi=3.14, area;
	
	printf("\n\n input the value for radious : ");
	scanf("%d",&r);
	
	area=pi*(r*r);
	
	printf("\n\n\t area of circle : %.2f",area);
	
	int wid, len;
	
	printf("\n\n Input the value of len : ");
	scanf("%d",&len);
	
	printf("\n\n Input the value of wid : ");
	scanf("%d",&wid);
	
	area=len*wid;
	
	printf("\n\n\t area of rectangle : %d",area);
	
	int b, h;
	
	printf("\n\n input the value for base : ");
	scanf("%d",&b);
	
	printf("\n\n input the value of height : ");
	scanf("%d",&h);
	
	area=0.5*(b*h);
	
	printf("\n\n\t area of triangle : %d",area);
}
