#include<stdio.h>

float get_val(float a, float b) {
    float c = 180 - (a + b);
    return c;
}

int main() {
    float a1, b1, sum;
    printf("Enter first & second angle = ");
    scanf("%f %f", &a1, &b1);
    sum = get_val(a1, b1);
    printf("Third angle = %f", sum);
    return 0;
}



/*
#include<stdio.h>

int main()

{
    float a, b, c;
    printf("Enter first & second angle = ");
    scanf("%f %f", &a, &b);
    c = 180 - (a + b);
    printf("Third angle = %.2f", c);
    return 0;
}
*/