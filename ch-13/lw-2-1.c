#include<stdio.h>
int main()
{
    int n,i,big=0;

    printf("enter array size :");
    scanf("%d",&n);

    int array[n]
    for(int i=0;i<=n;i++)
        {
            printf("enter a[%d]",i);
            scanf("%d",&array[i]);

            if(array[i]>big)
            {
                big=array[i];
            }
        }
        printf("large : %d\n",big);
}