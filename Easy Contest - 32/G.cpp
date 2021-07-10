#include <bits/stdc++.h>

using namespace std;

int main(){

    int num, i, j, status = 0;

    cin >> num;

    for(i = 1; i < 10; i++){
        if(status == 0){
            for(j = 1; j < 10; j++){
                if(i*j == num){
                    status = 1;
                    break;
                }
            }
        }
        else{
            break;
        }
    }

    if(status == 1){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}

