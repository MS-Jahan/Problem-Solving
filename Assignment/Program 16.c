#include <stdio.h>
#define SIZE 3

int main(){

    int matrixA[SIZE][SIZE], matrixB[SIZE][SIZE], matrixC[SIZE][SIZE], r, c, k;

    printf("Enter the values of matrix A:\n");
    for(r = 0; r < SIZE; r++){
        for(c = 0; c < SIZE; c++){
            scanf("%d", &matrixA[r][c]);
        }
    }

    printf("\nEnter the values of matrix B:\n");
    for(r = 0; r < SIZE; r++){
        for(c = 0; c < SIZE; c++){
            scanf("%d", &matrixB[r][c]);
        }
    }

    for(r = 0; r < SIZE; r++){
        for(c = 0; c < SIZE; c++){
            matrixC[r][c] = 0;
            for(k = 0; k < SIZE; k++){
                matrixC[r][c] += matrixA[r][k] * matrixB[k][c];
            }
        }
    }

    printf("\nResult: \n");

    for(r = 0; r < SIZE; r++){
        for(c = 0; c < SIZE; c++){
            printf("%4d", matrixC[r][c]);
        }
        printf("\n");
    }

    return 0;
}
