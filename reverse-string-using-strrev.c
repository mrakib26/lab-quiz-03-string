//how to reverse a string using strrev function in C
#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Rakibul Islam";
    /*
    char *rev = strrev(str);
    printf("Reversed string: %s\n", rev);
    */

    strrev(str);
    printf("Reversed string: %s\n", str);

    return 0;
}
