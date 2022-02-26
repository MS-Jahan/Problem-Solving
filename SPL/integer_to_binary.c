#include <stdio.h>

int main(){
    int num, bin_array[11] = {0};

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num == 0){
        printf("0\n");
        return 0;
    }

    int i = 0;
    while(num >= 1){
        bin_array[i] = num % 2;
        num /= 2;
        i++;
    }

    for(int j = i-1; j >= 0; j--){
        printf("%d", bin_array[j]);
    }
    printf("\n");
}