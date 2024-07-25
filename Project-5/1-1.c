#include<stdio.h>
int main()
{

    int n;

    printf("enter array size :");
    scanf("%d",&n);

    int array[n];
        
        for(int i=0;i<n;i++)
            {
                printf("enter array[%d]",i);
                scanf("%d",&array[i]);

                for(int i=0;i<n;i++)
                {
                    if(array[i]<0)
                        {
                            printf("negative : %d",&array[i]);
                        }
                    
                }
                    
            }
}