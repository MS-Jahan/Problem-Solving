#include <stdio.h>

int main(){

    int num[10], n, i, j, temp;

    printf("How many numbers: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &num[i]);
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < n - 1; j++){
            //printf("\nComparing: num[%d] %d --> num[%d] %d", j, num[j], j+1, num[j+1]);
            if(num[j] > num[j+1]){
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
        printf("\n");
    }

    for(i = 0; i < n; i++){
        printf("%d  ", num[i]);
    }

    return 0;
}
