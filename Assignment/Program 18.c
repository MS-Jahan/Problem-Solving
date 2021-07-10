#include <stdio.h>

int main(){

    int i, j, k, spaces = 5;

    for(i = 0; i <= 5; i++){
        for(k = 0; k < spaces; k++){
            printf(" ");
        }
        for(j = 0; j < i; j++){
            printf("%d ", j + 1);
        }
        printf("\n");
        spaces--;
    }

    return 0;
}
