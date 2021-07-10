#include <stdio.h>
#include <math.h>

int main(){

    float a, b, c, d, r1, r2;

    input:
    printf("Enter the value of a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    if(a == 0){
        printf("\nInvalid input. Value of a can't be 0. Please enter the values again!\n");
        goto input;
    }
    else{

        d = b * b - 4 * a *c;

        if(d == 0){
            printf("\nTwo same value of x is found.\nx = %f\n", -b/(float)(2*a));
        }
        else if(d > 0){
            printf("\nTwo value of x is found.\nx1 = %f\nx2 = %f\n", (-b + sqrt(d)) /(float)(2*a), (-b - sqrt(d)) /(float)(2*a));
        }
        else if(d < 0){
            d = -d;
            r1 = -b / (float)(2*a);
            r2 = sqrt(d) / (float)(2*a);
            printf("\nImaginary value of x is found.\nThey are: %f + i(%f) and %f - i(%f)\n", r1, r2, r1, r2);
        }
    }

    return 0;

}
