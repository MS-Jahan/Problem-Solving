#include <stdio.h>
#include <string.h>

int main(){

    int n, i = 0, flag = 1;

    printf("Enter number of characters: ");
    scanf("%d", &n);

    scanf("%*c");

    char word[n+1];


    printf("Enter the string: ");
    fgets(word, n+1, stdin);



    for(i = 0; i < strlen(word); i++){
        if(word[i] != word[strlen(word)-(i+1)]){
            flag = 0;
            break;
        }
    }

    if(flag == 1){
        printf("Inputted string is a palindrome.\n");
    }
    else{
        printf("Inputted string is not a palindrome.\n");
    }


    return 0;
}
