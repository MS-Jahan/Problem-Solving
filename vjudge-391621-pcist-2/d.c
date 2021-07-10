#include <stdio.h>

int main(){

    int x, y;
    float a, b;

    scanf("%d %d %f %f", &x, &y, &a, &b);

    printf("%d %d\n%0.1f %0.1f\n", x+y, x-y, a+b, a-b);

    return 0;

}
