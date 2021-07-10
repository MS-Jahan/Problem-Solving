#include <stdio.h>

int main(){

    int arr[10] = {0}, i;

    char c;

    while((c = getchar()) != '\n'){
        if(c == '0'){
            arr[0]++;
        }
        else if(c == '1'){
            arr[1]++;
        }
        else if(c == '2'){
            arr[2]++;
        }
        else if(c == '3'){
            arr[3]++;
        }
        else if(c == '4'){
            arr[4]++;
        }
        else if(c == '5'){
            arr[5]++;
        }
        else if(c == '6'){
            arr[6]++;
        }
        else if(c == '7'){
            arr[7]++;
        }
        else if(c == '8'){
            arr[8]++;
        }
        else if(c == '9'){
            arr[9]++;
        }
        else{
            ;
        }
    }

    for(i = 0; i < 10; i++){
        printf("%d", arr[i]);
        if(i == 9){
            printf("\n");
        }
        else{
            printf(" ");
        }
    }

    return 0;
}

