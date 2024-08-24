#include <stdio.h>

int main()
 {
    char c;

    printf("Enter a character: ");
    scanf(" %c", &c);

    switch(toupper(c)) {
        case 'A', 'E', 'I', 'o', 'U':
        
            printf("%c is a vowel.\n", c);
            break;
        default:
            if(c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
            {
                printf("%c is a consonant.\n", c);
            } 
            else 
            {
                printf("%c is not a letter.\n", c);
            }
    }

    return 0;
}