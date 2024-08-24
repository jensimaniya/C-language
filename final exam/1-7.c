#include<stdio.h>
int main()
{
    for(int i=1;i<=25;i++)
    {
        for(int j=i;j>=25;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}