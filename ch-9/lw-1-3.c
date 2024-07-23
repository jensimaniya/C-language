#include<stdio.h>
int main()
{
    int n,i;

    printf("enter first number");
    scanf("%d",&n);
    printf("enter second number");
    scanf("%d",&i);

    while(n<=i)
        {
            if(n%4==0)
                {
                    printf(" %d",n);
                }
            n++;
        }
}