#include <stdio.h>

int main(){

    long int n, i, j, sum = 0;
    scanf("%ld", &n);

    for(i = 0; i < n; i++){
        scanf("%ld", &j);
        sum += j;

    }

    printf("%ld\n", sum);

    return 0;
}
