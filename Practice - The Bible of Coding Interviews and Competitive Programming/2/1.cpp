#include <bits/stdc++.h>
using namespace std;

int checkPrime(int n){
    if(n <= 1){
        return false;
    }

    for(int i = 2; i*i < n; i++){
        cout << i << endl;
        if(n % i == 0){
            return false;
        }
    }

    return true;
}

int main(){

    int n = 137;

    //cin >> n;
    cout << checkPrime(n); 
}