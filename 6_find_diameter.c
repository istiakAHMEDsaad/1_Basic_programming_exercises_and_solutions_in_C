#include<stdio.h>

int main()

{
    float radius, diameter, area;
    float circumference;

    printf("Enter radius = ");
    scanf("%f", &radius);

    diameter = 2 * radius;
    printf("\nDiameter = '%.2f' units\n", diameter);

    circumference = (2 * 3.1416 * (float)radius);
    printf("Circumference = '%.2f' units\n");

    area = (3.1416 * radius * radius);
    printf("Area = '%.2f' units\n", area);

    return 0;
}