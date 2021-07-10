#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define nl cout << endl;
using namespace std;

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    ll a, b, x, y, z;

    cin >> a >> b >> x >> y >> z;

    ll needed = 0;

    // for x yellow
    a -= x*2;

    // for y green
    a -= y;
    b -= y;

    // for z blue
    b -= z*3;

    if(a < 0) {
        needed += a*-1;
    }

    if(b < 0) {
        needed += b*-1;
    }

    cout << needed << endl;

}