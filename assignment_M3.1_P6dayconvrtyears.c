#include<stdio.h>
main()
{
    int number_of_days, years=0, days=0;

    printf("Enter number of days: ");
    scanf("%d", &number_of_days);

    years = number_of_days * 365;
    days =years/365;
    
    printf("Years = %d", years);
    printf("\nDays = %d", days);
}
