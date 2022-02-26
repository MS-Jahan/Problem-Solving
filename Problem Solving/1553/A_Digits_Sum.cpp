#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define nl cout << endl;
using namespace std;
        
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);

    ll ts, n;

    cin >> ts;

    while(ts--){
        cin >> n;
        
        ll temp = n % 10;
        ll res;

        if(temp == 9){
            res = n/10 + 1;
        }
        else{
            res = n/10;
        }

        cout << res << endl;
    }
}