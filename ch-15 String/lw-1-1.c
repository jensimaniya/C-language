#include<stdio.h>
int main()
{
    char str[20];

    printf("Enter any string :");
    scanf("%[^\n]",&str);

    for(int i=0;i<20;i++)
        {
            if(str[i]>=97 && str[i]<=122)
                {
                    str[i]-=32;
                }
        }
            printf("Uppercase string is : %s",str);
}