#include <stdio.h>
#include <math.h>

float series(int n, int series, int logging);
int fact(int n);

int main(){

    int n, terms;

    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter number of terms: ");
    scanf("%d", &terms);

    printf("\ncos(%d) = ", n); //Ei line shudu porer line ke assist korar jonno
    series(n, terms, 1); //This is for sorol ongko type
    printf("\n\ncos(%d) = %0.2f\n", n, series(n, terms, 0)); //This is for final result

    return 0;

}

float series(int n, int terms, int logging){
    float sum = 0.0;
    int i;
    int counter = 1;
    //printf("1 ");
    for(i = 0; i <= terms; i++){
        if(i % 2 == 0){
            if(counter == 0){
                sum -= pow(n, i) / fact(i);
                if(logging == 1)
                    printf("- %0.2f/%d! ", pow(n, i), i);
                counter = 1;
            }
            else{
                sum += pow(n, i) / fact(i);
                if(logging == 1)
                    printf("+ %0.2f/%d! ", pow(n, i), i);
                counter = 0;
            }
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
