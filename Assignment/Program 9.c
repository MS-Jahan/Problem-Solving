#include <stdio.h>

int main(){

    int n, n1, n2, sum, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("\nFibonacci Numbers: 0, 1");

    n1 = 0;
    n2 = 1;

    for(i = 2; i < n; i++){
        sum = n1 + n2;
        printf(", %d", sum);
        n1 = n2;
        n2 = sum;
    }

    printf(".\n");

    return 0;

}
