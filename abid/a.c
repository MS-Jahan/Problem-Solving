#include <stdio.h>

void identify_triangle(float x, float y, float z){
    if((x == y) && (y == z)){
        printf("EQUILATERAL\n");
    }
    else if((x == y) || (y == z) || (z == x)){
        printf("ISOSCELES\n");
    }
    else{
        printf("SCALENE\n");
    }
}


int main(){
    float a, b, c;

    scanf("%f %f %f", &a, &b, &c);

    if((a+b > c) || (b+c > a) || (a+c > b)){
        identify_triangle(a, b, c);
    }
    else{
        printf("NOT-A-TRIANGLE\n");
    }
}