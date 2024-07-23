#include<stdio.h>
int main()
{
    int i=1,n;
    printf("enter any number :");
    scanf("%d",&n);

        do
        {
            if(n%2!=1)
            {
                printf("%d",n);
                n--;
            }
           
        }while(i<=n);
}