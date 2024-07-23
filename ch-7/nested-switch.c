#include<stdio.h>
int main()
{
    int choice;
    printf("select your launguge:\n");
    printf("press 1 for english\n");
    printf("press 2 for hindi\n");
    printf("press 3 for gujrati\n");
    printf("enter your choice:");
    scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("1 for internet recharge\n");
                printf("2 for top up recharge\n");
                printf("3 for special recharge\n");
                printf("enter your choice:");
                scanf("%d",&choice);

                    switch(choice)
                        {
                            case 1:
                                printf("internet recharge\n");
                                break;
                            case 2:
                                printf("top up recharge\n");
                                break;
                            case 3:
                                printf("special recharge\n");
                                break;
                        }
                        
             case 2:
                printf("1 for internet recharge\n");
                printf("2 for top up recharge\n");
                printf("3 for special recharge\n");
                printf("enter your choice:");
                scanf("%d",&choice);
        
                    switch(choice)
                        {
                            case 1:
                                printf("internet recharge\n");
                                break;
                            case 2:
                                printf("top up recharge\n");
                                break;
                            case 3:
                                printf("special recharge\n");
                                break;
                        }
            case 3:
                printf("1 for internet recharge\n");
                printf("2 for top up recharge\n");
                printf("3 for special recharge\n");
                printf("enter your choice:");
                scanf("%d",&choice);

                    switch(choice)
                        {
                            case 1:
                                printf("internet recharge\n");
                                break;
                            case 2:
                                printf("top up recharge\n");
                                break;
                            case 3:
                                printf("special recharge\n");
                                break;
                        }
        }
}