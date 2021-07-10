#include <stdio.h>
#define PI 3.1416

int main(){

    float radius, circumference, area;

    printf("Enter the value of radius: ");
    scanf("%f", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("Circumference = %0.2f\n", circumference);

    return 0;

}
