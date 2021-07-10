#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define nl cout << endl;
using namespace std;

bool isPrime(ll n){
    if(n < 2){
        return false;
    }

    
}

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    ll n, q, nOfP = 0, x;

    cin >> n >> q;

    ll i, temp_num = 3;

    while(temp_num <= n){
        for(i = 3; i * i <= n; i++){
            if(temp_num % i == 0){
                nOfP++;
            }
        }
        temp_num++;
    }

    for(i = 0; i < q; i++){
        cin >> x;
        for(ll j = 3; j * i <= n; j++){
            if(x % j == 0){
                cout << 1 << endl;
            }
        }
    }

}