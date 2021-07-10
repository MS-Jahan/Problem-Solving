#include <bits/stdc++.h>
using namespace std;

int main(){


    int n, temp, sum = 0, m;

    cin >> n;

    for(int i = 0; i < n; i++){
        temp = 0;
        for(int j = 0; j < 3; j++){
            cin >> m;

            temp += m;
        }
        if(temp >= 2){
            sum ++;
        }
    }

    cout << sum << endl;

}
