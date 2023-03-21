#include <stdio.h>              // imports standandard input output header package
#include <string.h>             // imports the string header
#include <math.h>               // imports math header
#include <stdlib.h>             // imports standard library header package

int main() 
{
	
    char s[100];                // declare a variable s of type char and of size 100 bytes
    scanf("%[^\n]%*c", &s);     // scanf for a string of said type and give it to address of s.
  	
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    printf("Hello, World!\n");  // Prints hello world with a line after it.
    printf("%s", s);            // Prints value of s using % format character
    return 0;                   // returns a program value of 0m with no errors.
}
