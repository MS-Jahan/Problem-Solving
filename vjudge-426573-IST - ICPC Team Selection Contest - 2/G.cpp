#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define nl cout << endl;
using namespace std;
 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);

    ll n, res;

    cin >> n;

    if(n <= 2){
        res = n;
    }
    else{
        int i = 1; 
        while(1){
            i++;
            // cout << i << endl;
            if(pow(2, i) >= n){
                res = i + 1;
                break;
            }
        }
    }

    cout << res << endl;

}