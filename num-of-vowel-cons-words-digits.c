
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100], ch; 
    int i, vowel, consonant, digit, word, other;

    printf("Enter a string: "); 
    fgets(s, sizeof(s), stdin); 

    s[strcspn(s, "\n")] = '\0'; 

    i=vowel=consonant=digit=word=other=0;
    for(i=0; (ch=s[i])!='\0'; i++)  {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') {
            vowel++; 
        }
        else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')) {
            consonant++; 
        }
        else if(ch>='0' && ch<='9') {
            digit++; 
        }
        else if(ch==' ') {
            word++; 
        }
        else {
            other++; 
        }
    }
    
    printf("Number of vowels: %d\n", vowel);
    printf("Number of consonants: %d\n", consonant);
    printf("Number of digits: %d\n", digit);
    printf("Number of words: %d\n", word + 1); // +1 for the last word
    printf("Number of other characters: %d\n", other);
    printf("Total characters: %d\n", i);

    return 0; 
}