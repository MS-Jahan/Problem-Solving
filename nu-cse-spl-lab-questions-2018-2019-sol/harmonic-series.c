#include <stdio.h>
#include <math.h>

int main(){

    int n, i;
    float sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        sum += 1.0/pow(i, i);
    }

    printf("Solution: %f", sum);

    return 0;
}
