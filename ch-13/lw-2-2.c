#include<stdio.h>
int main()
{
    int n;

    printf("enter array size :");
    scanf("%d",&n);
    
    int array[n];
        for(int i=0;i<n;i++)
            {
                printf("enter a[%d]=",i)
                scanf("%d",&array[i]);
            }
                for(int i=0;i<n;i++)
                {
                    for(int j=i+1;j<n;j++)
                        {
                            if(array[i]>array[j])
                            {
                                array[i]=array[i]+array[j];
                                array[j]=array[i]-array[j];
                                array[i]=array[i]-array[j];
                            }
                        }
                }
                    printf("sort :")
                    for(int i=0;i<n;i++)
                        {
                            printf("%d",array[i]);
                        }
}


