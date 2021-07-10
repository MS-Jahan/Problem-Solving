#include <stdio.h>

int main(){

    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if(number > 0){
        printf("\nInputted number is Positive.\n\n");
    }
    else if(number < 0){
        printf("\nInputted number is Negative.\n\n");
    }
    else{
        printf("\nInputted number is 0.\n\n");
    }

    return 0;

}
