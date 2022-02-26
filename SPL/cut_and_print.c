#include <stdio.h>
#include <string.h>

int main(){
    char num[50];
    int num_len, i, j;
    
    printf("Enter a number: ");
    scanf("%s", num);
    printf("\n");
    
    num_len = strlen(num);

    for(i = 0; i < num_len; i++){
        for(j = i; j < num_len; j++){
            printf("%c", num[j]);
        }
        printf("\n");
    }

    return 0;

}



