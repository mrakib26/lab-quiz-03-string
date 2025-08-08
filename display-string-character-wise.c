//how to display string character wise
#include <stdio.h>
#include <string.h>
int main()
{
    char s[]="Rakib"; 
    int i=0; 

    while(s[i]!='\0') {
        printf("%c\n", s[i]);  
        i++; 
    }
    return 0; 
}