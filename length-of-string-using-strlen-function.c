// Finding length of a string using strlen function in C

#include<stdio.h>
#include<string.h>
int main()
{
    char s[100]; 
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin); 

    int len = strlen(s)-1; 
    printf("Length of the string is: %d\n", len); 

    return 0; 
}