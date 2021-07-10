#include <stdio.h>

int main(){

    int i, j, status, count = 0;

    printf("Prime number series upto 1000:\n");

    for(i = 2; i <= 1000; i++){
        status = 1;
        for(j = 2; j < i; j++){
            if(i % j == 0){
                status = 0;
                break;
            }
        }
        if(status == 1){
            printf("%4d", i);
            count++;
        }
    }
    printf("\n\nTotal prime numbers: %d\n\n", count);

    return 0;
}

