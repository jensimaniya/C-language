#include<stdio.h>
int main()
{
    int a;
    printf("enter a number :");
    scanf("%d",&a);

    if (a>0)
    {
        printf("this number is positive");
    }
    else if(a==0)
    {
        printf("this number is neutral");
    }
    else
    {
        printf("this number is negativ");
    }
}