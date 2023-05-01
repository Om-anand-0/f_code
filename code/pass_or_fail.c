#include <stdio.h>

int main()
{
    float m, c, p, z;
    printf("welcome to pass or fail calculator \n");
    printf("Enter Maximum marks in one subject : \n");
    scanf("%f", &z);
    printf("Enter your Maths marks : \n");
    scanf("%f", &m);
    printf("Enter your Chemistry marks : \n");
    scanf("%f", &c);
    printf("Enter your Physics marks : \n");
    scanf("%f", &p);

    if (m > 33)
    {
        printf("Congratulations You've passed in Maths \n");
    }
    else
    {
        printf("Sorry You've failed in Maths \n");
    }
    if (c > 33)
    {
        printf("Congratulations You've passed in Chemistry \n");
    }
    else
    {
        printf("Sorry You've failed in Chemistry \n");
    }
    if (p > 33)
    {
        printf("Congratulations You've passed in Physics \n");
    }
    else
    {
        printf("Sorry You've failed in Physics \n");
    }
    if (m + c + p / z * 100 > 40)
    {
        printf("Congratulations You've passed in all subjects \n");
    }
    else
    {
        printf("Sorry You've failed in all subjects \n");
    }

    return 0;
}
