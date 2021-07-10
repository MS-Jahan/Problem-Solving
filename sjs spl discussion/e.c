#include <stdio.h>

int main(){

    int ts, n, i;

    scanf("%d", &ts);

    for(i = 0; i < ts; i++){
        scanf("%d", &n);
        printf("%d\n", n*(n-1)/2);
    }

    return 0;

}

