#include <stdio.h>

int main()
{
 int n,i, max=0;

 printf("enter array size :");
 scanf("%d",&n);

 int array [n]
for(int i=0;i<n;i++)
{
    printf("enter a[%d]");
    scanf("%d",&array[i]);
    if(array[i]>max)
    {
        max=array[i];

    }
}
printf("largest :%d",max);
}