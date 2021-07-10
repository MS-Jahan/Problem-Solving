#include <stdio.h>
#include <string.h>

int contains(char arr[], char c, int len){
    int i;
    for(i = 0; i < len; i++){
        if(arr[i] == c){
            return 1;
        }
    }

    return 2;
}

int main(){

    int i, len, counter = 0;
    char str[102], ch[102];

    scanf("%s", str);

    len = 0;

    for(i = 0; i < strlen(str); i ++){
        if(contains(ch, str[i], len) == 2){
            ch[len] = str[i];
            counter++;
            len++;
        }
    }

    if(counter % 2 == 0){
        printf("CHAT WITH HER!\n");
    }
    else{
        printf("IGNORE HIM!\n");
    }

    return 0;
}


