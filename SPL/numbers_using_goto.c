#include <stdio.h>

int main(){
    int num = 1, i = 1, j = 0;

    process:
        printf("%d", num);
        j++;

        if(num == 10){
            printf("\n");
        }
        else if(i == j){
            num++;
            i++;
            j = 0;
            printf("\n");
            goto process;
        }
        else{
            num++;
            printf(" ");
            goto process;
        }

        return 0;    
}