#include<stdio.h>
int main()
{
    int r,c,sum,elements,avg;
    printf("enter the rows:");
    scanf("%d",&r);
    printf("enter the columns:");
    scanf("%d",&c);

    int a[r][c];
    elements=r*c;

    
    
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
            sum=sum+a[i][j];
        }
    }
            avg=sum/elements;
    printf("the avg is %d",avg);
}