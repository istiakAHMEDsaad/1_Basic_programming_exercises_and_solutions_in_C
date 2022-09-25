#include<stdio.h>
int main()
{
    float x, y, sum;
    printf("Enter base of the triangle = ");
    scanf("%f", &x);
    printf("Enter height of the triangle = ");
    scanf("%f", &y);

    sum = (x * y) / 2;

    printf("Area of the triangle = %.2f sq. units", sum);
    return 0;
}