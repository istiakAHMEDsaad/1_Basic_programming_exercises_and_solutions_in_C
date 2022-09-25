#include<stdio.h>
#include<math.h>
int main()
{
    float prin, time, rate, sum;
    printf("Enter principle (amount) = ");
    scanf("%f", &prin);
    printf("Enter time = ");
    scanf("%f", &time);
    printf("Enter rate = ");
    scanf("%f", &rate);
    sum = prin * pow((1 + rate /100),time);
    printf("Compound Interest = %f", sum);
    return 0;
}