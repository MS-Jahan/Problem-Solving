#include <stdio.h>
int main(){
    int nums[4], temp1[3], temp2[3], i, j, temp;

    scanf("%d %d %d %d", &nums[0], &nums[1], &nums[2], &nums[3]);

    for(i = 0; i < 3; i++){
        temp1[i] = nums[i];
    }

    for(i = 1; i < 4; i++){
        temp2[i] = nums[i];
    }


    for(i = 0 ; i < 2; i++){
        for(j = i+1; j <= 2; j++){
            if(temp1[i] > temp1[j]){
                temp = temp1[j];
                temp1[j] = temp1[i];
                temp1[i] = temp;
            }
        }
    }


    for(i = 0 ; i < 2; i++){
        for(j = i+1; j <= 2; j++){
            if(temp2[i] > temp2[j]){
                temp = temp2[j];
                temp2[j] = temp2[i];
                temp2[i] = temp;
            }
        }
    }


    if((temp1[0] + temp1[1] > temp1[2]) && (temp2[0] + temp2[1] > temp2[2])){
        printf("TRIANGLE\n");
    }
    else if((temp1[2] == temp1[0] + temp1[1]) || (temp2[2] == temp2[0] + temp2[1])){
        printf("SEGMENT\n");
    }
    else{
        printf("IMPOSSIBLE\n");
    }

    return 0;

}
