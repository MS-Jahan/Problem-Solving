#include <stdio.h>

int main(){

    int a, b, c, d, i, j, k, sum = 0 ;

    printf("Enter the number of rows and columns of first matrix: ");
    scanf("%d %d", &a, &b);

    int first[a][b];
    printf("Enter the elements of first matrix: \n");
    for(i = 0; i < a; i++){
        for(j = 0; j < b; j++){
            scanf("%d", &first[i][j]);
        }
    }

    printf("Enter the number of rows and columns of second matrix: ");
    scanf("%d %d", &c, &d);

    if(b != c){
        printf("Matrix manipulation is not possible.");
    }
    else{

        int second[c][d];
        printf("Enter the elements of second matrix:\n");
        for(i = 0; i < c; i++){
            for(j = 0; j < d; j++){
                scanf("%d", &second[i][j]);
            }
        }

        int matrix[a][d];

        for(i = 0; i < a; i++){
            for(j = 0; j < d; j++){
                for(k = 0; k < c; k++){
                    sum += first[i][k] * second[k][j];
                }

                matrix[i][j] = sum;
                sum = 0;
            }
        }

        printf("\nResult matrix:\n");

        for(i = 0; i < a; i++){
            for(j = 0; j < d; j++){
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }

    }

}
