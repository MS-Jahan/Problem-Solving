#include <stdio.h>

int main(){

    int n, i, *p, sum = 0;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of array: ");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    p = arr;

    for(i = 0; i < n; i++){
        sum += *p++;
    }

    printf("Sum = %d\n", sum);

    return 0;
}

