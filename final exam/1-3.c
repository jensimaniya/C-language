#include <stdio.h>

int main() 
{
    char str[20];
    int i, j;
    

    printf("Enter a string: ");
    scanf("%s", str);

    
    for (i = 0; str[i] != '\0'; i++);

    
    for (j = 0; j < i / 2; j++) {
        temp = str[j];
        str[j] = str[i];
        str[i - j - 1] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}