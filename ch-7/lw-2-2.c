#include<stdio.h>
int main()
{
    int a,b,c,d;

    printf("enter value of a");
    scanf("%d",&a);
    printf("enter value of b");
    scanf("%d",&b);
    printf("enter value of c");
    scanf("%d",&c);
    printf("enter value of d");
    scanf("%d",&d);

    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                printf("a is big");
            }
            else
            {
                printf("d is big");
            }
        }
        else
        {
            if(c>d)
            {
                printf("c is big");
            }
            else
            {
                printf("d is big");
            }
        }

    }
    else
    {
        if(b>c)
        {
            if(b>d)
            {
                printf("b is big");
            }
            else
            {
                printf("d is big");
            }

        }
        else
        {
            if(c>d)
            {
                printf("c is big");
            }
            else
            {
                printf("d is big");
            }

        }
    }    
}   
        




