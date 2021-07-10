#include <stdio.h>

int main(){

    long int ts, a, b, i;

    scanf("%ld", &ts);

    for(i = 0; i < ts; i++){
        scanf("%ld %ld", &a, &b);

        if(a > b){
            printf(">\n");
        }
        else if(a < b){
            printf("<\n");
        }
        else{
            printf("=\n");
        }
    }

    return 0;

}


