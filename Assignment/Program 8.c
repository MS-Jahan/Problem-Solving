#include <stdio.h>

int main(){

    int n, max, min, i;

    printf("Enter the length of array: ");
    scanf("%d", &n);
    printf("Enter the values of array: ");
    int nums_arr[n];

    for(i = 0; i < n; i++){
        scanf("%d", &nums_arr[i]);
    }

    max = nums_arr[0];
    min = nums_arr[0];

    for(i = 1; i < n; i++){
        if(max < nums_arr[i]){
            max = nums_arr[i];
        }

        if(min > nums_arr[i]){
            min = nums_arr[i];
        }
    }

    printf("\nMaximum Value: %d.\nMinimum Value: %d.\n\n", max, min);

    return 0;

}

