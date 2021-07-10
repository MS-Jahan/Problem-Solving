#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define nl cout << endl;
using namespace std;
 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);

    ll n, res = 1;

    cin >> n;

    if(n >= 6){
        res += n/6;

    }

    cout << res << endl;
    
}

