#include <stdio.h>

int main()
{
    // Amount = a
    float a;
    float b = 0, c = 0, d = 0;

    b = b * (0.05) * (a - 250000);
    c = c * (0.2) * (a - 500000);
    d = d * (0.3) * (a - 1000000);
    printf("Enter your income in numericals : \n");
    scanf("%f", &a);

    if (a <= 250000)
    {
        printf("you don't have to pay tax");
    }
    else if (a > 250000 && a < 500000)
    {
        printf("You have to pay 5%% tax of your income \n");
        printf("Your tax amount is %f", b);
    }
    else if (a >= 500000 && a < 1000000)
    {
        printf("You have to pay 20%% tax of your Income \n");
        printf("Your tax amount is %f", c);
    }
    else if (a >= 1000000)
    {
        printf("You have to pay 30%% tax of your Income \n");
        printf("Your tax amount is %f", d);
    }
    else
    {
        printf("Enter amount coreectly");
    }

    return 0;
}