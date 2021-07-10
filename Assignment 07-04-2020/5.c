#include <stdio.h>
int main(){

    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if(number % 2 == 0){
        printf("\nInputted number is Even.\n\n");
    }
    else{
        printf("\nInputted number is Odd.\n\n");
    }

    return 0;
}