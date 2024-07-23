#include<stdio.h>
int main()

{
    int a,b,c,d,e,f;

    printf("enter value of a :");
    scanf("%d",&a);
    printf("enter value of b :");
    scanf("%d",&b);
    printf("enter value of c :");
    scanf("%d",&c);
    printf("enter value of d :");
    scanf("%d",&d);
    printf("enter value of e :");
    scanf("%d",&e);
    printf("enter value of f :");
    scanf("%d",&f);

    (a>b)
        ?(a>c)
            ?(a>d)
                ?(a>e)
                    ?(a>f)
                        ?printf("a is big")
                        :printf("f is big")
                    
                    :(e>f)
                        ?printf("e is big")
                        :printf("f is big")

                :(d>e)
                    ?(d>f)
                        ?printf("d is big")
                        :printf("f is big")
                    :(e>f)
                        ?printf("e is big")
                        :printf("f is big")
            :(c>d)
                ?(c>e)
                    ?(c>f)
                        ?printf("c is big")
                        :printf("f is big")
                    :(e>f)
                        ?printf("e is big")
                        :printf("f is big")

                :(d>e)
                    ?(d>f)
                        ?printf("d is big")
                        :printf("f is big")
                    :(e>f)
                        ?printf("e is big")
                        :printf("f is big")

        :(b>c)
            ?(b>d)
                ?(b>e)
                    ?(b>f)
                        ?printf("b is big")
                        :printf("f is big")
                    :(e>f)
                        ?printf("e is big")
                        :printf("f is big")
                :(d>e)
                    ?(d>f)
                        ?printf("d is big")
                        :printf("f is big")
                    :(e>f)
                        ?printf("e is big")
                        :printf("f is big")
            :(c>d)
                ?(c>e)
                    ?(c>f)
                        ?printf("c is big")
                        :printf("f is big")
                    :(e>f)
                        ?printf("e is big")
                        :printf("f is big")
                :(d>e)
                    ?(d>f)
                        ?printf("d is big")
                        :printf("f is big")
                    :(e>f)
                        ?printf("e is big")
                        :printf("f is big");    
}