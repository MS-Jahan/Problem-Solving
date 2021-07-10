#include <stdio.h>

int main(){

    int ts, n, i, even = 0, odd = 0, e_last, o_last;

    scanf("%d", &ts);

    for(i = 0; i < ts; i++){
        scanf("%d", &n);

        if(n % 2 == 0){
            even += 1;
            e_last = i+1;
        }
        else{
            odd += 1;
            o_last = i+1;
        }
    }

    if(even < odd){
        printf("%d\n", e_last);
    }
    else{
        printf("%d\n", o_last);
    }

    return 0;

}



