#include <stdio.h>
#include <math.h>

int main(){

    int number, tempnum, n = 0, remainder, sum = 0, i;

    printf("Enter a number to check whether the number is Armstrong or not: ");
    scanf("%d", &number);

    tempnum = number;

    while(tempnum != 0){
        tempnum /= 10;
        n++;
    }

    tempnum = number;

    while(tempnum != 0){
        remainder = tempnum % 10;
        tempnum /= 10;
        sum += pow(remainder, n);
    }

    if(number == sum){
        printf("\nInputted number is an Armstrong number.\n\n");
    }
    else{
        printf("\nInputted number isn't an Armstrong number.\n\n");
    }

    return 0;
}
