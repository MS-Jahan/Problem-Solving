#include <stdio.h>

int main(){

    long long int k, n, w, res = 0;

    scanf("%lld %lld %lld", &k, &n, &w);

    for(int i = 1; i <= w; i++){
        res += i * k;
    }

    if(n >= res){
        printf("0\n");
    }
    else{
        res = res - n;
        printf("%d\n", res);
    }

}
