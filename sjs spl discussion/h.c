#include <stdio.h>

int main(){

    long int x, a, b, i;

    scanf("%d", &x);

    for(i = 0; i < x; i++){
        scanf("%d %d", &a, &b);
        if(a > b){
            printf(">\n");
        }
        else if(a < b){
            printf("<\n");
        }
        else if(a == b){
            printf("=\n");
        }

    }

}
