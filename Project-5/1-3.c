#include<stdio.h>
int main()
{
    int r,c;

    printf("enter the rows :");
    scanf("%d",&r);

    printf("enter the columns :");
    scanf("%d",&c);

    int array1[r][c],array2[r][c];

    printf("enter elements of array :\n");

        for(int i=0;i<r;i++)
            {
                for(int j=0;j<c;j++)
                {
                    printf("a[%d][%d] :",i,j);
                    scanf("%d",& array[i][j]);   
                }
            }

                for(i=0; i<r; i++)
                    {
                        for(j=0; j<c; j++)
                                {

                                    b[j][i] = a[i][j];

                                }

                    }
                for(i=0; i<r; i++)

                    {

                        for(j=0; j<c; j++)

                       {
                            printf("\t%d", b[i][j]);

                        }
                    }
      

                    
                    
}