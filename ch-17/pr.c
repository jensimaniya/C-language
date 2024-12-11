#include<stdio.h>

int getsum (int a,int b)
{
    return a+b;
}


int main()
{
    int a=getint("a");
    int b=getint("b");

    int ans=getsum(a,b);

    printf("sum of %d",a+b);
}