//how to reverse a string without strrev function in C
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100] = "Rakibul Islam";
    char s2[100];

    int i = 0, j,  len = 0;
    while(s1[i]!='\0') {
        i++;
        len++;
    }
    //len = strlen(s1);

    for(j=0, i = len-1; i>=0; j++, i--) {
        s2[j] = s1[i];
    }

    s2[j] = '\0';

    //strrev(str);
    printf("Reversed string: %s\n", s2);

    return 0;
}
