#include<stdio.h>
int main()
{
    int sum=0,n;
    printf("Enter the size of array:");
    scanf("%d",&n);

    int array[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter a[%d]=",i);
        scanf("%d",&array[i]);

        sum+=array[i];
    }
    for(int i=0;i<n;i++)
    {
        printf("Value of a[%d]:%d\n",i,array[i]);
    }
    printf("sum=%d",sum);
}