#include<stdio.h>

int main()

{
    int a, b, sum;
    
    printf("Enter length = ");
    scanf("%d", &a);

    printf("Enter width = ");
    scanf("%d", &b);

    sum = (2 * (a + b));
    printf("Preimeter of rectangle = '%d' units", sum);

    return 0;
}