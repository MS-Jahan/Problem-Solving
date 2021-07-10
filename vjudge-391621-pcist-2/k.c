#include <stdio.h>

int main(){

    int n, i, f_count = 0, s_count = 0;

    for(i = 0; i < 3; i++){
        scanf("%d", &n);

        if(n == 5){
            f_count++;
        }

        if(n == 7){
            s_count++;
        }
    }

    if(f_count ==2 && s_count == 1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}
