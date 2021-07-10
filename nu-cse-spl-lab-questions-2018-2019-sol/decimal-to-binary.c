#include <stdio.h>

int main(){

    int num, bn, i = 1, remainder = 0;

    scanf("%d", &num);

    while(num != 0){
        remainder += i * (num % 2);
        printf("remainder: %d\n", remainder);
        num /= 2;
        printf("num: %d\n", num);
        i *= 10;
    }

    printf("%d", remainder);

    return 0;
}
