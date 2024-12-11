#include<stdio.h>

int getArraySum(int a[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    return sum;
}


int getArrayfact(int a[], int n)
{
    int fact=0;
    for(int i=0;i<n;i++)
    {
        fact*=a[i];
    }
        return fact;
}