#include<stdio.h>
int main()
    {
        int marks;
        
        printf("enter your marks :");
        scanf("%d",&marks);

        if(marks>=91 && marks<=100)
            {
                printf("greada:a\n");
                printf(" excellent work!!");
                
            }
        else if(marks>=81 && marks<=90)
            {
                printf("gread:b\n");
                printf("well done");
                
            }
        else if (marks>=71 && marks<=80)
            {
                printf("gread :c\n");
                printf("good job");
                
            }
        else if (marks>=61 && marks<=70)
            {
                printf("gread :d\n");
                printf("you passed");
                
            }
        else if (marks>=20 && marks<=34)
            {
                printf("gread :e\n");
                printf("fail");
               
            }
        

        
        
    }
        