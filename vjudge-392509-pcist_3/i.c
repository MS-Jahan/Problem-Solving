#include <stdio.h>
#include <string.h>


int main(){

    char str1[102];
    char str2[102];
    int i, flag = 1;

    scanf("%s %s", str1, str2);

    int len1 = strlen(str1), len2 = strlen(str2);

    if(len1 == len2){
        for(i = 0; i < len1; i++){
            if(str1[i] != str2[len2 - (1 + i)]){
                flag = 0;
                break;
            }
        }
    }
    else{
        flag = 0;
    }

    if(flag == 1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}




