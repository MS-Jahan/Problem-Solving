#include <bits/stdc++.h>
using namespace std;
int main(){

    char hello_str[103];
    string hello_arr = "hello";
    int counter = 0, flag;
    scanf("%s", hello_str);
    int len = strlen(hello_str);

    int i, j = 0;

    for(i = 0; i < 5; i++){
        flag = 0;
        while(j != len){
            if(hello_str[j] == hello_arr[i]){
                counter++;
                flag++;
                j++;
                break;
            }
            if(j == len){
                break;
            }
            j++;
        }
        if(flag == 0){
            break;
        }
    }

    if(counter == 5){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

}
