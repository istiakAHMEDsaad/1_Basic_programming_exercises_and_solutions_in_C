#include<stdio.h>
#include<math.h>
int main()
{
    float x, y, z, x1, y1 , tot;
    float per, avg;
    printf("Enter marks of the five subjects = ");
    scanf("%f %f %f %f %f", &x, &y, &z, &x1, &y1);
    tot = x + y + z + x1 + y1;
    avg = tot / 5;
    per = (tot / 500) * 100;
    printf("Total = %.2f\nAverage = %.2f\nPercentage = %.2f", tot, avg, per);
    return 0;
}