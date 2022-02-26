#include <stdio.h>

int main(){
    int i, j, num = 49, spaces = 0, step = 1;
    int original_num = num;

    i = 0;
    while(num > 0){
        for(j = 0; j < spaces; j++){
            printf(" ");
        }
        for(j = 0; j < num; j++){
            printf("*");
        }

        printf("\n");
        spaces++;
        num -= 2; // 1

        if(num == 1){
            step = 2;
            while(num <= original_num){ // 3
                for(j = 0; j < spaces; j++){
                    printf(" ");
                }
                for(j = 0; j < num; j++){
                    printf("*");
                }
                printf("\n");
                spaces--;
                num += 2;
            }
        }

        if(step == 2){
            break;
        }

    }
}


/*

*****
 ***
  *
 ***
*****


******
 ****
  **
 ****
******


*/