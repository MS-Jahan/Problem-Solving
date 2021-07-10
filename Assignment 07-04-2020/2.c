#include <stdio.h>

int main()
{
    float radius, circumference, area, pi = 3.1416;
    printf("\nEnter the value of radius: ");

    scanf("%f", &radius);

    circumference = 2 * pi * radius;
    area = pi * radius * radius;

    printf("\nCircumference = %0.2f\nArea = %0.2f\n\n", circumference, area);

    return 0;
}