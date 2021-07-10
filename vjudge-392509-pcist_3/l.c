#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    char str[202];

    scanf("%s", str);

    int len = strlen(str), i, wub = 0, w = 0;

    for(i = 0; i < len; i++){

        if(i+2 < len){
            if(str[i] == 'W' && str[i+1] == 'U' && str[i+2] == 'B'){
                i+=2;
                //w = 0;
                wub = 1;
            }
            else{

                if(w == 1 && wub == 1){
                    printf(" ");
                }

                wub = 0;
                printf("%c", str[i]);
                w = 1;
            }

        }
        else{
            if(w == 1 && wub == 1){
                printf(" ");
            }

            wub = 0;
            printf("%c", str[i]);
            w = 1;
        }


    }

    printf("\n");

    return 0;

}
