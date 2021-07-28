#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define nl cout << endl;
using namespace std;

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    ll n, a, x, y;

    cin >> n >> a >> x >> y;

    ll o = n - a;
    ll total = a * x + o * y;

    cout << total << endl;
}