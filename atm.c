#include <stdbool.h>
#include <stdio.h>

int main()
{
    int select;
    int p;
    float balance = 100000.0;
    float transfer;

    printf("welcome to sabka apna ATM🏧\nEnter pin:");
    scanf("%d", &p);

    if (p == 7990)
    {
        printf("pranam user\n");
    }
    else
    {
        printf("invalid pin\n");
        return 0;
    }

    while (true)
    {
        printf("1.check balance💳\n");
        printf("2.withdrawl💸\n");
        printf("3.deposit🤑\n");
        printf("4.exit\n");
        scanf("%d", &select);

        switch (select)
        {
            case 1: // to check balance
                printf("your current balance is $%.2f\n", balance);
                break;

            case 2: // withdrawl money
                printf("enter withdrawl amount\n");
                scanf("%f", &transfer);
                if (transfer > 0 && transfer <= balance)
                {
                    balance -= transfer;
                    printf("successfully withdrawn $%.2f \n ", transfer);
                }
                else
                {
                    printf("❌insufficient amount of balance or invalid amount\n");
                }
                break;

            case 3: // deposit money
                printf("enter deposit amount\n");
                scanf("%f", &transfer);
                if (transfer > 0)
                {
                    balance += transfer;
                    printf("successfully deposited %.2f\n", transfer);
                }
                else
                {
                    printf("invalid amount");
                }
                break;

            case 4: // exit system
                printf("thank you for chosing sabka apna atm\n");
                return 0;

            default:
                printf("invalid option try again\n");
        }
    }
    return 0;
}
