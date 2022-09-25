#include<stdio.h>

int main()

{
    float centimeter, meter, kilometer;

    printf("Enter in Centimeter = ");
    scanf("%f", &centimeter);

    meter = centimeter / 100.0;
    printf("\nLength in meter = '%.2f'\n", meter);

    kilometer = centimeter / 100000.0;
    printf("Length in kilometer = '%.2f'\n", kilometer);

    return 0;


}