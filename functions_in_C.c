#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b, int c, int d);        // Here is a function prototype of max_of_four function

int main() {                                        // int main function beginning
    int a, b, c, d;                                 // declaring four variables a, b, c, d of type int.
    scanf("%d %d %d %d", &a, &b, &c, &d);           // scaning for four integers using format specifier and assigning them to declared variables a, b, c, d.
    int ans = max_of_four(a, b, c, d);              // declaring a variable ans of type int and assigning it the return value of max_of_four function.
    printf("%d", ans);                              // printinf the answer using int format specifier.
    
    return 0;                                       // returning integer 0 to close function.
}

int max_of_four(int a, int b, int c, int d)         // declaring function max_of_for
{                                                   // creating lines of if statements to find the max of four input numbers and returning the max value.
    if (a >= b && a >= c && a >= d) {               
        return a;
    } else if (b >= a && b >= c && b >= d) {
        return b;
    } else if (c >= a && c >= b && c >= d) {
        return c;
    } else {
        return d;
    }
}
