#include <stdio.h>

int main(){

    int arr_len, i, j, temp, search, search_stat = 0;

    printf("How many marks for input?\nEnter a number: ");
    scanf("%d", &arr_len);

    int marks[arr_len];

    for(i = 0; i < arr_len; i++){
        printf("Mark %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    for(i = 0; i < arr_len-1; i++){
        for(j = i + 1; j < arr_len; j++){
            printf("\nComparing: marks[%d] %d --> marks[%d] %d", i, marks[i], j, marks[j]);
            if(marks[i] > marks[j]){
                temp = marks[j];
                marks[j] = marks[i];
                marks[i] = temp;
            }
        }
        printf("\n");
    }

    printf("\nArray: ");
    for(i = 0; i < arr_len; i++){
        printf("%d  ", marks[i]);
    }

    printf("\nEnter a mark to search: ");
    scanf("%d", &search);
    printf("\nPosition(s) of %d in list: ", search);
    for(i = 0; i < arr_len; i++){
        if(search == marks[i]){
            printf("%4d", i + 1);
            search_stat = 1;
        }
    }

    if(search_stat == 0){
        printf("[NOT FOUND]\n\n");
    }
    else{
        printf("\n\n");
    }

    return 0;
}

