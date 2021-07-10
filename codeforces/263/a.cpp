#include <bits/stdc++.h>
using namespace std;

int main(){

    int arr[5][5], k, l, steps = 0;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            scanf("%d", &arr[i][j]);

            if(arr[i][j] == 1){
                k = i + 1;
                l = j + 1;
            }
        }
    }

    if(k >= 3){
        steps += k - 3;
    }
    else{
        steps += 3 - k;
    }

    if(l >= 3){
        steps += l - 3;
    }
    else{
        steps += 3 - l;
    }

    cout << steps << endl;

}
