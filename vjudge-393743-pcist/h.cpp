#include <bits/stdc++.h>
using namespace std;

int main(){

    int ts, n, k;

    cin >> ts;

    for(int i = 0; i < ts; i++){
        cin >> n >> k;

        if(k > n){
            cout << k - n << endl;
        }
        else{
            cout << (n-k) % 2 << endl;
        }

    }


}
