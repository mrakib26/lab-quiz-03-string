//how to swap two strings in C
#include <stdio.h>
#include <string.h>
int main() 
{
    char s1[100], s2[100], temp[100]; 

    printf("Enter first string: "); 
    fgets(s1, sizeof(s1), stdin); 
    printf("Enter second string: "); 
    fgets(s2, sizeof(s2), stdin); 

    s1[strcspn(s1, "\n")] = '\0'; 
    s2[strcspn(s2, "\n")] = '\0'; 

    strcpy(temp, s1); 
    strcpy(s1, s2); 
    strcpy(s2, temp); 

    printf("After swapping: \n"); 
    printf("First string: %s\n", s1);
    printf("Second string: %s\n", s2);

    return 0; 
}