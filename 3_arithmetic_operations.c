#include<stdio.h>

int main()

{
    int a, b;
    float quo;
    int sum, dif, pro, mod;

    printf("Enter First Number = ");
    scanf("%d", &a);

    printf("Enter Second Number = ");
    scanf("%d", &b);

    sum = a + b;
    printf("\nSum = %d\n", sum);

    dif = a - b;
    printf("Difference = %d\n", dif);

    pro = a * b;
    printf("Product = %d\n", pro);

    quo = (float)a / b;
    printf("Quotient = %f\n", quo);

    mod = a % b;
    printf("Moduls = %d\n", mod);

    return 0;
}