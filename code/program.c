#include <stdio.h>
int main()
{
    char a, b;
    printf("your first name is\n"); 
    scanf("%c", &a);
    printf("your second name is\n");
    scanf("%c", &b);
    printf("Your full name is is %c", a + b);
    return 0;
}
