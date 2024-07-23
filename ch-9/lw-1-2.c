#include<stdio.h>
int main()
{
    int n;

    printf("enter value of n :");
    scanf("%d",&n);

    while(n>=1)
        {
        if(n%2==1)
            {
                printf(" %d",n);
            }
            n--;
        } 
}