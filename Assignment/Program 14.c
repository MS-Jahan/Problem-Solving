#include <stdio.h>

int main(){

    int num, n = 0;

    printf("Enter a number to reverse: ");
    scanf("%d", &num);

    while(num != 0){
        n *= 10;
        n = n + num % 10;
        num /= 10;
    }

    printf("\nReversed number: %d\n\n", n);

    return 0;
}
