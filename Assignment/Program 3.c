#include <stdio.h>
#define PI 3.1416

int main(){

    int num1, num2, num3, max, min;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1 >= num2 && num1>= num3){
        max = num1;
    }
    else if(num2 >= num1&& num2 >= num3){
        max = num2;
    }
    else{
        max = num3;
    }


    if(num1<= num2 && num1<= num3){
        min = num1;
    }
    else if(num2 <= num1&& num2 <= num3){
        min = num2;
    }
    else{
        min = num3;
    }

    printf("\nMaximum: %d\nMinimum: %d\n", max, min);

    return 0;

}

