#include <stdio.h>
#include <string.h>

int main(){

    int ts, i;

    char str[102];

    scanf("%d", &ts);

    for(i = 0; i < ts; i++){
        scanf("%s", &str);
        int len = strlen(str);

        if(len <= 10){
            printf("%s\n", str);
        }
        else{
            printf("%c%d%c\n", str[0], len-2, str[len-1]);
        }
    }

    return 0;
}

