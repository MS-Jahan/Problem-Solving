#include <stdio.h>

int main(){
    
    int rowA, colA, rowB, colB, i, j;

    printf("Number of Rows and Columns for Matrix A: ");
    scanf("%d %d", &rowA, &colA);

    printf("Number of Rows and Columns for Matrix B: ");
    scanf("%d %d", &rowB, &colB);

    if(rowA != colB){
        printf("Operation isn't possible!");
        return 0;
    }

    int matrixA[rowA][colA], matrixB[rowB][colB], matrixRes[colB][rowA];

    printf("Enter the values of Matrix A: ");
    
    for(int i = 0; i < rowA; i++){
        for(int j = 0; j < colA; j++){
            scanf("%d", &matrixA[i][j]);
        }
    }

    printf("Enter the values of Matrix B: ");

    for(int i = 0; i < rowB; i++){
        for(int j = 0; j < colB; j++){
            scanf("%d", &matrixB[i][j]);
        }
    }

    int sum = 0;

    for(int i = 0; i < rowA; i++){
        for(int j = 0; j < colB; j++){
            for(int k = 0; k < rowB; k++){
                sum += matrixA[i][k] * matrixB[k][j];
            }
            matrixRes[i][j] = sum;
            sum = 0;
        }
    }

    printf("Product of the matrices:\n");
    
    for(int i = 0; i < rowA; i++){
        for(int j = 0; j < colB; j++){
            printf("%d ", matrixRes[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}