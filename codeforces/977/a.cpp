#include <bits/stdc++.h>
using namespace std;

int main(){

    long int n, k, rem;
    cin >> n >> k;

    for(int i = 0; i < k; i++){
        rem = n % 10;
        //cout << "rem: " << rem << endl;
        if(rem == 0){
            n /= 10;
        }
        else{
            n--;
        }
        //cout << n << endl;
    }

    cout << n << endl;
}