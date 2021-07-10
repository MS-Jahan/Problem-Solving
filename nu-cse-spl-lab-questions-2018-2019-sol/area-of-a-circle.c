#include <stdio.h>

int main(){

    float area, radius;

    printf("Input radius of a circle: ");

    scanf("%f", &radius);

    area = 3.1416 * radius * radius;

    printf("Area of the circle: %0.2f\n", area);

    return 0;
}
