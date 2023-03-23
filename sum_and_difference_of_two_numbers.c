// Importing several headers by using the CPP directive #include
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b;                                   // declaring two variables a and b of type int.
    scanf("%d %d", &a, &b);                     // scaning for two integers on the same line separated by a space using format specifier. 
    
    float c, d;                                 // declaring two variables c and d of type float.
    scanf("%f %f", &c, &d);                     // scanfing for two floating point nnumbers separated by a space using format specifier.         
    
    printf("%d %d\n", a + b, a - b);            // printing the sum and the difference between the two integers on the same line separated by a space and moving cursor to a new line.
    printf("%.1f %.1f\n", (c + d), (c - d));    // printing the sum and the difference between the two floating point numbers on the same line separated by a space and moving cursor to a new line.
    return 0;                                   // closing the function by making it return the integer 0.
}
