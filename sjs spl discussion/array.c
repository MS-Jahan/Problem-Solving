#include <stdio.h>


float sum(float g, float h);

int main(){

    float a, b, result;
    scanf("%f %f", &a, &b);

    result = sum(a, b);

    printf("%f", result);

}

float sum(float x, float y){

    return x + y;

}
