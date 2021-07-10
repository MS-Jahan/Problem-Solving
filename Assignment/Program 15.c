#include <stdio.h>

int main(){

    int num1, num2, a, b, temp;

    printf("Enter two numbers for swapping: ");
    scanf("%d %d", &num1, &num2);
    printf("\nNumber1: %d | Number2: %d\n", num1, num2);

    a = num1;
    b = num2;

    temp = a;
    a = b;
    b = temp;
    printf("\nAfter swapping using temporary variable,\nNumber1: %d | Number2: %d\n", a, b);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("\nAfter swapping without using temporary variable,\nNumber1: %d | Number2: %d\n\n", num1, num2);

    return 0;

}
