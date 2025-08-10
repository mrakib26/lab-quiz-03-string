//how to compare two strings using strcmp function in C

#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100], s2[100];

    printf("Enter 1st string: ");
    fgets(s1, sizeof(s1), stdin);
    printf("Enter 2nd string: ");
    fgets(s2, sizeof(s2), stdin);

    int cmp = strcmp(s1,s2);

    if(cmp==0) {
        printf("\nstring-1 = string-2\n\n");
    }
    else if(cmp==1) {
        printf("\nstring-1 > string-2\n\n");
    }
    else {
        printf("\nstring-1 < string-2\n\n");
    }

    return 0;
}
