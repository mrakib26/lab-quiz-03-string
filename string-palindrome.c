//how to check if a string is palindrome or not in C

#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100], s2[100]; 
    int i=0, len=0, j; 

    printf("Enter a string: "); 
    fgets(s1, sizeof(s1), stdin); 

    // Remove newline character if present
    s1[strcspn(s1, "\n")] = '\0'; 

    while(s1[i] != '\0') {
        i++; 
        len++; 
    }

    for(j=0, i = len-1;i>=0; i--, j++) {
        s2[j] = s1[i]; 
    }

    s2[j] = '\0';

    printf("Reversed string: %s\n", s2);

    if(strcmp(s1, s2) == 0) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    } 

    return 0; 
}