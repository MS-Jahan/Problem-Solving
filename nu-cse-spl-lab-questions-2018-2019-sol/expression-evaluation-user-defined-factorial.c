#include <stdio.h>
#include <math.h>

int fact(int n);
float series(int x, int terms);

int main(){

    int x, terms;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter number of terms: ");
    scanf("%d", &terms);

    printf("Result: %f\n", series(x, terms));

    return 0;

}

float series(int x, int terms){

    float sum = x;
    int i, sign_flag = 0;

    for(i = 3; i <= terms*2; i++){
        if(i % 2 != 0){
            if(sign_flag == 1){
                sum += pow(x, i)/fact(i);
                sign_flag = 0;
            }
            else{
                sum -= pow(x, i)/fact(i);
                sign_flag = 1;
            }

            printf("%f\n", sum);

        }
    }

    return sum;

}



int fact(int n){

    if(n > 1){
        return n * fact(n - 1);
    }
    else{
        return 1;
    }

}
