#include<stdio.h>

int main()

{
    float f, c;

    printf("Temperature in fahrenhiet = ");
    scanf("%f", &f);

    c = ( f - 32 ) * 5 / 9;
    printf("Temperature in celsius = '%.2f' C", c);

    return 0;
}