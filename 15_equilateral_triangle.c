#include<stdio.h>
#include<math.h>
int main()
{
    float x, y, sum;
    printf("Enter side of the equilateral triangle = ");
    scanf("%f", &x);
    sum = (sqrt(3) / 4) * (x * x);
    printf("Area of equilateral triangle = %.2f sq. units", sum);
    return 0;
}