#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int pin, select, depo, withdraw;
    int balance = 10000;
    printf("Welcome to atm \n");
    printf("Enter your Card\n");
    printf("Enter your Pin\n");
    scanf(" %d",&pin);
    if (pin == 1234)
    {
    printf("You have successfully logged in\n");
    }
    else
    {
    printf("Wrong pin entered\n");
    printf("Please Try Again.\n");
    abort();
    }
    printf("Select One of the  following options: 1. Deposit 2. Withdrawl 3. Check balance \n");
    scanf(" %d",&select);
    switch (select)
    {
    case 1:
        printf("Enter the amount to be deposit:\n");
        scanf("%d",&depo);
        balance = balance + depo;
        printf("Your current balance is: %d\n", balance);
        printf("Thank you for your visit.\n");
        break;;
    case 2:
        printf("Enter the amount to be withdrawn:\n");
        scanf("%d",&withdraw);
        balance = balance - withdraw;
        if (withdraw > balance)
        {
            printf("Insufficient balance \n");
            printf("Thank you for your visit.\n");
            abort();
        }
            else
            {
                printf("Your remaining balance is: %d\n", balance);
                printf("Thank you for your visit.\n");
            }
        break;
    case 3:
        printf("Your balance is: %d\n", balance);
        printf("Thank you for your visit.\n");
        break;
    default:
        printf("Invalid option\n");
        printf("Please Try Again.\n");
        break;
    }
}