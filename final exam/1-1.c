#include <stdio.h>

int main()
 {
    char c;

    printf("Enter a character: ");
    scanf(" %c", &c);

    switch(vowel) 
    {
        case 'A', 'E', 'I', 'o', 'U':

            printf("%c is a vowel.\n", c);
            break;
        default:
            if(c != 'A' && c != 'E' && c !='I' && c != 'O' && c !='U')
            {
                printf("%c is a consonant.\n", c);
            } 
            else 
            {
                printf("%c is vowel.\n", c);
            }
    }

    
}