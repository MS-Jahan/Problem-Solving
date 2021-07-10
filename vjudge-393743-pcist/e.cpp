#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, m, flag = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> m;

        if(flag == 0 && m == 1){
            flag = 1;
        }
    }

    if(flag == 1){
        cout << "HARD" << endl;
    }
    else{
        cout << "EASY" << endl;
    }

}
