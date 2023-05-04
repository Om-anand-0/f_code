#include <stdio.h>

int main()
{
    float income;
    float tax = 0;

    printf("Enter your income in numericals : \n");
    scanf("%f", &income);

    if (income < 250000)
    {
        printf("you don't have to pay tax");
    }
    if (income >= 250000 && income <= 500000)

    {
        tax = tax + 0.05 * (income - 250000);
    }
    if (income >= 500000 && income < 1000000)

    {
        tax = tax + 0.2 * (income - 500000);
    }
    if (income >= 1000000)

    {
        tax = tax + 0.3 * (income - 1000000);
    }
    printf("your income tax to be paid is %f \n", tax);

    return 0;
}
