// Make CPP directive to include the following header files.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {                            // declaration of main function
	
    int n;                              // declaration of integer n
    scanf("%d", &n);                    // taking user input and assigning it to variable n
    //Complete the code to calculate the sum of the five digits on n.
    
    int sum = 0;                        // declaration of integer variable sum
    do {                                // formation of do while loop that runs until n is 0
        sum += (n % 10);                // add and assign to sum the value of the unit's digit of n
        n = n / 10;                     // divide n by 10 and assign it that value
    } while (n / 1 != 0);
    
    printf("%d", sum);                  // print the value of sum
    return 0;                           // return 0 to close the funciton
}
