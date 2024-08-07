#include "function.c"
int main()
{
    int choice,a,b;
    do{
    printf("press 1 for + \n");
    printf("press 2 for - \n");
    printf("press 3 for * \n");
    printf("press 4 for / \n");
    printf("press 5 for % \n");
    printf("press 0 for exit\n");
    
    printf("enter value of a :");
    scanf("%d",&a)
    printf("enter value of b :");
    scanf("%d",&b);

    switch(choice)
    {
        case 1:
            printf("Addition of %d\n",getsum(a,b));
            break;
        case 2:
            printf("Subtraction of %d\n",getsub(a,b));
            break;
        case 3:
            printf("Multiplication of %d\n",getmul(a,b));
            break;
        case 4:
            printf("Division of %d\n",getdiv(a,b));
            break;
        case 5:
            printf("modul of %d\n",getmod(a,b));
            break;
        case 0:
            printf("Thank You!\n");
            break;
        default:
            printf("Please Enter number 1 to 5 ");
            break;
    }
    }
}