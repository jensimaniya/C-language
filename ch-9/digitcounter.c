#include<stdio.h>
int main()
{
    int num,n;
    printf("enter any number");
    scanf("%d",&n);

    while(n!=0)
    {
        
          n=n/10;
          num++;   
    }
    printf("total number of digit %d",num);
    

}