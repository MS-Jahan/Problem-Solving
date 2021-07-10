#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(){

    int i, upper = 0, lower = 0, len;

    char str[103];

    scanf("%s", str);

    len = strlen(str);

    for(i = 0; i < len; i++){
        if(isupper(str[i])){
            upper++;
        }
        else if(islower(str[i])){
            lower++;
        }
    }

    if(upper > lower){
        for(i = 0; i < len; i++){
            str[i] = toupper(str[i]);
        }
    }
    else{
        for(i = 0; i < len; i++){
            str[i] = tolower(str[i]);
        }
    }

    printf("%s\n", str);

    return 0;
}





