#include<stdio.h>

int div()
{
    int n;
    printf("Enter the a number: ");
    scanf("%d", &n);
    if(n%3==0 && n%5==0)
    {
        printf("The number is divisible by both");
    }
    else
    {
        printf("The number is not divisible by both");
    }
}
int main()
{
    div();
}