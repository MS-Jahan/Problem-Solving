#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define print(str) cout << str
#define no cout << endl;
using namespace std;

int main(){
ios_base::sync_with_stdio(false);

    int n, k, l, c, d, p, nl, np, to_dr, to_lime, to_salt, res;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    to_dr = (k*l) / nl;
    to_lime = c * d;
    to_salt = p / np;
    
    res = min({to_dr, to_lime, to_salt});
    res /= n;

    cout << res << endl;
}