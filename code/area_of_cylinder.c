#include <stdio.h>
int main()
{
    float radius, height;
    float surface_area, volume;21
    printf("your radius and height of a cylinder is\n"); 
    scanf("%f%f", &radius, &height);
    surface_area = 2 * (22 / 7) * radius *(radius + height);
    volume = (22 / 7) * radius * radius * height;
    printf("Surface area of cylinder is : %3f\n", surface_area);
    printf("Volume of cylinder is : %3f\n", volume);
    return 0;
}