#include<stdio.h>

int main()
{
    float celcius, fahrenheit;
    printf("Enter celcius \n");
    scanf("%f", &celcius);
    fahrenheit = (celcius * 9/5) + 32;
    printf("Fahrenheit is : %f", fahrenheit);
    return 0;
}