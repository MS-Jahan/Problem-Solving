#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    char str[13];

    int status = 1, Ccounter = 0, uppcount = 0, i;
    scanf("%s", str);

    if(str[0] != 'A'){
        status = 0;
    }
    else{
        for(i = 0; i < strlen(str); i++){
            //cout << i;
            if(str[i] == 'C'){
                Ccounter++;
            }
            if(isupper(str[i])){
                uppcount++;
            }
        }
        //cout << endl;
        if(Ccounter == 1 && uppcount == 2){
            if(str[2] == 'C'){
                status = 1;
            }
            else if(str[strlen(str) - 2] == 'C'){
                status = 1;
            }
            else{
                status = 0;
            }
        }
        else{
            status = 0;
        }

    }

    if(status == 0){
        printf("WA\n");
    }
    else{
        printf("AC\n");
    }

    return 0;

}
