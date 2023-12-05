#include <stdio.h>
main()
{
	int day;
	printf("\n\t enter a day : ");
	scanf("%d",&day);  //1 to 7
	
	switch(day)  //control variable
	{
		case 1 :
			printf("\n\t sunday..");
			break;
		case 2 :
			printf("\n\t monday");
			break;
		case 3 :
			printf("\n\t tuesday..");
			break;
		case 4 :
			printf("\n\t wednesday");
			break;
		case 5 :
			printf("\n\t thursday..");
			break;
		case 6 :
			printf("\n\t friday");
			break;
		case 7 :
			printf("\n\t saturday");
			break;
	
	default:
			printf("\n\t you made wrong dicision");
    }
}
