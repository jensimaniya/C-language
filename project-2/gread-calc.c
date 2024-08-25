#include<stdio.h>
int main()
{
    int a;
    char gread;

    printf("enter your marks:");
    scanf("%d",&a);

        (100<=a && a>=81)
            ?gread='a'
                :(80<=a && a>=71)
                    ?gread='b'
                        :(70<=a && a>=61)
                            ?gread='c'
                                :(60<=a && a>=51)
                                    ?gread='d'
                                        :(50<=a && a>=35)
                                            ?gread='e'

        switch(gread)
            {
                
                    case 'a':
                        printf("excellent work!!");
                        break;
                    case 'b':
                        printf("well done");
                        break;
                    case 'c':
                        printf("good job");
                        break;
                    case 'd':
                        printf("you passed");
                        break;
                    case 'e':
                        printf("fail");
                        break;
            }
        
        if(a,b,c,d,e)
            {
                printf("you are eligible for the next level");
            }
        else
            {
                printf("you are not eligible ")
            }

}