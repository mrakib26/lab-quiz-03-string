// Finding string length without using strlen function in C

#include<stdio.h>
#include<string.h>
int main() 
{
    char s[100];
    printf("Enter a string: "); 
    fgets(s, sizeof(s), stdin); 

    int i = 0, len = 0; 

    while(s[i]!='\0') {
        i++; 
        if(s[i]!= ' ') {
            len++;
        } 
    }

    printf("Length of the string is: %d\n", len-1); 

    return 0; 
}