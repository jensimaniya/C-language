#include<stdio.h>
int main()
{
    int n,sum=0,len=0,avg;
    
    
    printf("Enter size of array:");
    scanf("%d",&n);

    int array[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter a[%d]:",i);
        scanf("%d",&array[i]);

        sum+=array[i];
        len+=array[i];
        avg=sum/len;

    }
        
    for(int i=0;i<n;i++)
    {
        printf("Value of a[%d]:%d\n",i,array[i]);
    }
    printf("Sum=%d\n",sum);
    printf("Length=%d\n",len);
    printf("Avg=%d\n",avg);
}