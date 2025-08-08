// how  to copy a string using strcpy function in C

#include<stdio.h>
#include<string.h>
int main()
{
    char source[100], destination[100];

    printf("Enter a string to copy: ");
    fgets(source, sizeof(source), stdin); 

    strcpy(destination, source); 

    printf("Copied string: %s\n", destination); 

    return 0; 
}