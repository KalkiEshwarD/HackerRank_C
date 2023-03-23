// Includeing the CPP directive to import standard input output header
#include <stdio.h>

void update(int *a,int *b) {            // declaration of function update with no return value.
    // Complete this function
    int c = *a + *b;                    // Declaring a new variable c and assigning it the sum of two numbers (numbers pointed by pointers a and b)
    if (*a > *b) {                      // starting an if branch to find absolute difference between the values pointed by a and b.
        *b = *a - *b; 
    } else {
        *b = *b - *a;
    }
    *a = c;                              // assigning the value of c to the memory that a pointer points.
}

int main() {                             // declaration of main function.
    int a, b;                            // declaring two variables a and be of type int.
    int *pa = &a, *pb = &b;              // declaring two integer pointers pa and pb and making it point to the values of a and b.
    
    scanf("%d %d", &a, &b);              // taking input from user and assigning it to variables a and b.
    update(pa, pb);                      // Passing the value to update function that's present above. 
    printf("%d\n%d", a, b);              // printing the values of a and b after the update function changes the value of a and b.

    return 0;                            // returning a value to close the function.
}
