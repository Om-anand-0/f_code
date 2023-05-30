#include<stdio.h>

int main()
{
    int i=0;
    printf("enter no \n");
    scanf("%d", &i);
while (i>=10 && i<= 20)
{
    printf("%d \n", i);
    i++;
}

    return 0;
}