#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    char ch;                // declaring a variable ch of type char
    scanf("%c", &ch);       // scaning for user input and assigning it to variable ch using &ch pointer
    scanf("\n");            //scanfing for the '\n' character in the input buffer and consumes it. So that it doesn't interfere with the following scanf.
    
    char s[20];             // declare a variable s of type char and give it a memory of 20 bytes.
    scanf("%s", &s);        // scaning for user input using %s format specifier and assigning it to s using &s pointer.
    scanf("\n");            // consuming new line character if present in input buffer.
    
    char sen[100];          // declare a variable sen of type char and assign it a memory of 100 bytes.
    scanf("%[^\n]%*c" , &sen);  // using scanf using the format specifier to read input until a new line character is encountered.
    scanf("\n");            // consuming new line character present in input buffer.
    
    printf("%c\n", ch);     // printing variable ch
    printf("%s\n", s);      // printing variable s
    printf("%s\n", sen);    // printing variable sen
    
    
    return 0;               // returning integer 0 to close the function.
}
