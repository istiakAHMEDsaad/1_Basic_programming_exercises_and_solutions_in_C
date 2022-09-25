#include<stdio.h>
#include<math.h>

int main()

{
    int base, expo, power;

    printf("\nEnter the Base = ");
    scanf("%d", &base);

    printf("\nEnter the Exponent = ");
    scanf("%d", &expo);

    power = pow(base, expo);
    printf("'%d'(base) ^ '%d'(exponent) = '%d'\n", base, expo, power);

    return 0;

}