#include<stdio.h>
int main()
{
    int n,i,sum;

    printf("enter any number :");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
        {
            sum=sum+i;
        }
            printf("sum of %d",sum);
}