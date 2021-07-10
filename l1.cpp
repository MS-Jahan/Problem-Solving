
#include <bits/stdc++.h>

using namespace std;

int main(){

    int i, j , k, l, range, sum, arr_len = 0, t1, t2, t3;

    while(1){
        cin >> range >> sum;

        if(range == 0 && sum == 0){
            break;
        }

        for(i = 1; i <= range-2; i++){
            for(j = i+1; j <= range-1; j++){
                for(k = j+1; k <= range; k++){
                    if(i != j && i != k && j != k){
                        if(i + j + k == sum){
                            arr_len++;
                        }
                    }
                }
            }
        }
        cout << arr_len << endl;
        arr_len = 0;
    }
}
