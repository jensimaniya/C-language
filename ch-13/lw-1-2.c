#include<stdio.h>
int main()
{
    int n;
    float avg;
    
    printf("Enter size of array:");
    scanf("%d",&n);

    int array[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter a[%d]:",i);
        scanf("%d",&array[i]);

        
    }
    avg=(float)sum/(float)len;

    for(int i=0;i<n;i++)
    {
        printf("Value of a[%d]:%d\n",i,array[i]);
    }
    
    printf("Avg=%.2f\n",avg);
}