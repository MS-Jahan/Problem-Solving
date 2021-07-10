#include <bits/stdc++.h>
using namespace std;


int main(){

    long int k, n, w, i, sum = 0;

    cin >> k >> n >> w;

    for(i = 1; i <= w; i++){
        sum += k * i;
    }

    if(sum >= n){
        cout << sum - n << endl;
    }
    else{
        cout << 0 << endl;
    }
}
