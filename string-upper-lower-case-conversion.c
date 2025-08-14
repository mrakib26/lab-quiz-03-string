//how to convert a string to upper and lower case in C
#include <stdio.h>
#include <string.h>
int main()
{
    char s[100]; 

    printf("Enter a string: "); 
    fgets(s, sizeof(s), stdin); 
    s[strcspn(s, "\n")] = '\0'; 

    // strupr(s); 
    // printf("Upper case: %s\n", s);

    // strlwr(s); 
    // printf("Lower case: %s\n", s);

    //Convert a string where all characters are in lower case to upper case and vice versa
    for(int i =0; s[i] != '\0'; i++) {
        if(s[i] >='a' && s[i] <= 'z') {
            // s[i] = s[i] - 'a' + 'A';
            s[i] = toupper(s[i]); 
        } 
        else if(s[i] >='A' && s[i] <= 'Z') {
            // s[i] = s[i] - 'A' + 'a';
            s[i] = tolower(s[i]);  
        }
    }

    printf("Converted case: %s\n", s);

    return 0; 
}