// string concatenation (sum of two strings) using strcat function in C
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100], s2[100];
    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin); 
    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin); 
    
    // Remove newline character from fgets input
    s1[strcspn(s1, "\n")] = 0; // remove newline character from s1
    s2[strcspn(s2, "\n")] = 0; // remove newline character from s2

    strcat(s1, s2); // concatenate s2 to s1

    printf("Concatenated string: %s", s1);

    return 0; 
}