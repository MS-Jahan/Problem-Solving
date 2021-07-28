#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define nl cout << endl;
using namespace std;

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    ll m, n, q, inp;

    cin >> m >> n;
    string ms[m], ns[n];

    fori(m){
        cin >> ms[i];
    }

    fori(n){
        cin >> ns[i];
    }

    cin >> q;

    fori(q){
        cin >> inp;
        ll temp_m = (inp%m == 0 ? m-1 : (inp%m)-1);
        ll temp_n = (inp%n == 0 ? n-1 : (inp%n)-1);

        string res = ms[temp_m] + ns[temp_n];

        cout << res << endl;
    }
}