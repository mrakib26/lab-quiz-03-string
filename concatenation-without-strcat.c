//string concatenation (sum of two strings) without strcat function in C

#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100], s2[200];
    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);
    //gets(s1);
    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);
    //gets(s2);

    s1[strcspn(s1, "\n")] = '\0'; // remove newline character from s1
    s2[strcspn(s2, "\n")] = '\0'; // remove newline character from s2

    int i = 0, len = 0;
    //len = strlen(s1);                     //another way to find string length.
    /*
    for(int i =0; i<s1[i]; i++) {
        len++;
    }
    */
    while (s1[i]!='\0') {
        i++;
        len++;
    }

    int j = 0;
    while (s2[j]!='\0') {
        s1[len+j] = s2[j];
        j++;
    }

    s1[len+j] = '\0'; // null-terminate the concatenated string

    printf("Concatenated string: %s", s1);

    return 0;
}
