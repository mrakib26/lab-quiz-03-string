#include<stdio.h>
#include<string.h>
int main()
{
    char s[100]; 

    int capital=0, small=0, digit=0, i; 

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    for(i=0; s[i]!='\0'; i++) {
        if(s[i]>='A' && s[i]<='Z') {
            capital++; 
        }
        else if(s[i]>='a' && s[i]<='z') {
            small++;
        }
        else if(s[9]>='0' && s[i]<='9') {
            digit++; 
        }
    }

    printf("Number of capital letters: %d\n", capital);
    printf("Number of small letters: %d\n", small);
    printf("Number of digits: %d\n", digit);
    printf("Total characters: %d\n", i);

    return 0; 
}