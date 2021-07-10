#include <stdio.h>
#include <string.h>
int main(){

    char para[400];
    int option;

    printf("Enter your two-line-paragraph: ");
    gets(para);

    printf("Do you want to:\n1. Uppercase all letters.\n2. Lowercase all letters\n0. Exit.\n\nYour Choice: ");
    scanf("%d", &option);

    if(option == 1){
        puts(strupr(para));
    }
    else if(option == 2){
        puts(strlwr(para));
    }
    else{
        printf("Program Exiting...");
    }

    return 0;

}

/*
Meeting_ID: 588 853 9049
Password: 397907
*/

