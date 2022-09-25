#include<stdio.h>

int main()

{
    char charVal;
    unsigned char uCharVal;
    
    short shortVal;
    unsigned short uShortVal;
    
    int intVal;
    unsigned int uIntVal;
    
    long longVal;
    unsigned long uLongVal;
    
    long long longLongVal;
    unsigned long long uLongLongVal;
    
    float floatVal;
    double doubleVal;
    long double longDoubleVal;
    

    printf("Enter a character: ");
    charVal = getchar();
    getchar();  
    
    printf("Enter another character: ");
    uCharVal = getchar();
    getchar();  
    
    printf("Enter a signed short value: ");
    scanf("%hi", &shortVal);
    
    printf("Enter an unsigned short value: ");
    scanf("%hu", &uShortVal);
    
    printf("Enter an signed integer value: ");
    scanf("%d", &intVal);
    
    printf("Enter an unsigned integer value: ");
    scanf("%lu", &uIntVal);
    
    printf("Enter a signed long value: ");
    scanf("%ld", &longVal);
    
    printf("Enter an unsigned long value: ");
    scanf("%lu", &uLongVal);
    
    printf("Enter a signed long long value: ");
    scanf("%lld", &longLongVal);
    
    printf("Enter an unsigned long long value: ");
    scanf("%llu", &uLongLongVal);
    
    printf("Enter a float value: ");
    scanf("%f", &floatVal);
    
    printf("Enter a double value: ");
    scanf("%lf", &doubleVal);
    
    printf("Enter a long double value: ");
    scanf("%Lf", &longDoubleVal);
    
    
    printf("\nYou entered character: '%c' \n", charVal);
    printf("You entered unsigned character: '%c' \n\n", uCharVal);
    
    printf("You entered signed short: %hi \n", shortVal);
    printf("You entered unsigned short: %hu \n\n", uShortVal);
    
    printf("You entered signed int: %d \n", intVal);
    printf("You entered unsigned int: %lu \n\n", uIntVal);
    
    printf("You entered signed long: %ld \n", longVal);
    printf("You entered unsigned long: %lu \n\n", uLongVal);
    
    printf("You entered signed long long: %lld \n", longLongVal);
    printf("You entered unsigned long long: %llu \n\n", uLongLongVal);
    
    printf("You entered float: %f \n", floatVal);
    printf("You entered double: %lf \n", doubleVal);
    printf("You entered long double: %Lf \n", longDoubleVal);

    return 0;
}



/* 

Data Type	Memory (bytes)	Range	Format Specifier 
Short Int	2	-32,768 to 32,767 	%hd 
Unsigned Short Int	2	0 to 65,535 	%hu 
Unsigned Int	4	0 to 4,294,967,295 	%u 
Int	4	-2,147,483,648 to 2,147,483,647 	%d 
Long int	4	-2,147,483,648 to 2,147,483,647 	%ld 
Unsigned Long Int	4	0 to 4,294,967,295 	%lu 
Long Long Int	8	-(2^63) to (2^63)-1 	%lld 
Unsigned Long Long Int	8	0 to 18,446,744,073,709,551,615 	%llu 
Signed Char	1	-128 to 127 	%c 
Unsigned Char	1	0 to 255 	%c 
Float	4		%f 
Double	8		%lf
Long Double	16		%Lf 

 */