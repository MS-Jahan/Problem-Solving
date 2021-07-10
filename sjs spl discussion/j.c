#include <stdio.h>

int main(){

    float n, i, num, zeros = 0, pos = 0, neg = 0, total;

    scanf("%f", &n);

    //int arr[n];

    for(i = 0; i < n; i++){
        scanf("%f", &num);

        if(num == 0){
            zeros += 1;
        }
        else if(num > 0){
            pos += 1;
        }
        else{
            neg += 1;
        }

    }

    total = zeros + pos + neg;

    printf("%0.6f\n", pos/total);
    printf("%0.6f\n", neg/total);
    printf("%0.6f\n", zeros/total);


}
