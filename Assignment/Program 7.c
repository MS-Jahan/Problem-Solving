#include <stdio.h>

int main(){

    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if(((year  % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)){
        printf("\nInputted year is a leap year.\n\n");
    }
    else{
        printf("\nInputted year is not a leap year.\n\n");
    }

    return 0;

}
