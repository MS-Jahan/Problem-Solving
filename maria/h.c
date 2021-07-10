#include <stdio.h>

int main(){
    long int x, a, b, i;
    scanf("%ld",&x);

    for(i = 0; i < x; i++){
        scanf("%ld %ld", &a, &b);

        if(a>b){
            printf(">\n");
        }
        else if(a<b){
            printf("<\n");
        }
        else if(a==b){
            printf("=\n");
        }
    }

    return 0;
}
