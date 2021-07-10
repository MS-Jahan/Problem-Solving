#include <stdio.h>
#include <string.h>
#include <ctype.h>

int contains(char arr[], char c, int len){
    int i;
    for(i = 0; i < len; i++){
        //printf("%c ", arr[i]);
        if(arr[i] == c){
            return 1;
        }
    }

    return 2;
}

int main(){

    char str[103];
    char arr[200];
    char vowels[12] = {'a', 'e', 'i', 'o', 'u', 'y', 'A', 'E', 'I', 'O', 'U', 'Y'};
    int i, arr_idx = 0;

    scanf("%[^\n]c", str);
    int len = strlen(str);

    for(i = 0; i < len; i++){
        if(str[i] == ' '){
            arr[arr_idx] = str[i];
            arr_idx++;
        }
        else if(isalpha(str[i])){
            if(contains(vowels, str[i], 12) == 2){
                arr[arr_idx] = '.';
                arr_idx++;
                arr[arr_idx] = tolower(str[i]);
                arr_idx++;
            }
        }
        else{
            arr[arr_idx] = str[i];
            arr_idx++;
        }
    }

    for(i = 0; i < arr_idx; i++){
        printf("%c", arr[i]);
    }
    printf("\n");

    return 0;

}
