#include <stdio.h>

int main(){

    int l, b, i = 0;

    scanf("%d %d", &l, &b);

    while(b >= l){
        l *= 3;
        b *= 2;
        i++;
    }

    printf("%d\n", i);

    return 0;
}

