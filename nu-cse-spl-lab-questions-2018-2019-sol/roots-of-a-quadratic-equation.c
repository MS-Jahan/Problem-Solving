#include <stdio.h>
#include <math.h>

int main(){

    float a, b, c, determiner, x1, x2;
    input_a:
    printf("Enter value of a: ");
    scanf("%f", &a);

    if(a <= 0){
        printf("Value of a can't be <=0.\n");
        goto input_a;
    }
    else{
        printf("Enter value of b & c: ");
        scanf("%f %f", &b, &c);

        printf("%f %f %f\n", a, b, c);

        determiner = b*b - 4*a*c;

        if(determiner == 0){
            x1 = -b / 2*a;
            printf("Value of x = %0.2f", x1);
        }
        else if(determiner > 0){
            x1 = (-b + sqrt(b*b - 4*a*c)) / 2*a;
            x2 = (-b - sqrt(b*b - 4*a*c)) / 2*a;
            printf("x has two values.\nValue of x1 = %0.2f\nValue of x2 = %0.2f", x1, x2);
        }
        else if(determiner < 0){
            determiner *= -1 / (2*a);
            x1 = -b / (2*a);
            printf("x has two imaginary values.\nValue of x1 = %0.2f + %0.2fi\nValue of x2 = %0.2f - %0.2fi\n", x1, determiner, x1, determiner);
        }

    }


    return 0;
}
