#include <stdio.h>

int main(){

    int x, sum = 0, step = 0;

    scanf("%d", &x);

    while(sum != x){
        if(sum + 5 <= x){
            sum += 5;
            step++;
        }
        else if(sum + 4 <= x){
            sum += 4;
            step++;
        }
        else if(sum + 3 <= x){
            sum += 3;
            step++;
        }
        else if(sum + 2 <= x){
            sum += 2;
            step++;
        }
        else if(sum + 1 <= x){
            sum += 1;
            step++;
        }
    }

    printf("%d\n", step);

}
