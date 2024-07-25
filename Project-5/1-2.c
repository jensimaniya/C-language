#include<stdio.h>
int main()
{
    int r,c,large=0;

    printf("enter the rows :");
    scanf("%d",&r);

    printf("enter the colums :");
    scanf("%d",&c);

    int a[r][c];

    for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
                {
                    printf("a[%d][%d]",i,j);
                    scanf("%d",&a[i][j]);
                    
                    {
                        if(a[i][j]>large)
                        {
                            large=a[i][j];
                        }
                    }
                        
                }
                printf("largest element :%d", large);
        }
          
}