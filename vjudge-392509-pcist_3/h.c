#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    char str[103];
    char arr[6] = "hello";

    int counter = 0, flag;
    scanf("%s", str);

    int len = strlen(str), i, j = 0;

    for(i = 0; i < 5; i++){
        flag = 0;
        while(j != len){

            if(str[j] == arr[i]){
                //printf("Comparing: %c | %c\n", str[j], arr[i]);
                counter++;
                flag++;
                j++;
                break;
            }
            if(j == len){
                break;
            }
            j++;
        }
        if(flag == 0){
            break;
        }
    }

    if(counter == 5){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;

}
