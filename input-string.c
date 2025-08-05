// How to get input in string 
#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100]; 

    printf("Enter a string: "); 
    
    //gets(str); // Using gets() is unsafe, prefer fgets() in real applications
    fgets(str, sizeof(str), stdin); // safer alternative to gets() 
    //scanf("%99[^\n]", str); // To read a string with spaces, use this format specifier
    
    // Note: scanf with %s stops reading at the first whitespace, so we use %[^\n] to read until a newline.
    
    // printf("You entered: %s\n", str);
    printf("You entered: ");
    puts(str); 

    return 0; 
}