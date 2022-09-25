#include<stdio.h>

int main()

{
    int years, days, days1, weeks;

    printf("NB: Ignoring leap year\n");
    printf("Enter days = ");
    scanf("%d", &days);

    years = days / 365 ;
    weeks = (days % 365) / 7;
    days1 = days - ((years * 365) + (weeks * 7));
    printf("\n'%d' Days = '%d' Years, '%d' Weeks, '%d' Days\n", days, years, weeks, days1);
    
    return 0;


}