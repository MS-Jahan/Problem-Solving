#include <stdio.h>

int main(){

    int num, n;

    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Number in reverse order: ");

    while(num != 0){
        printf("%d", num % 10);
        num = num / 10;
    }



    return 0;
}

