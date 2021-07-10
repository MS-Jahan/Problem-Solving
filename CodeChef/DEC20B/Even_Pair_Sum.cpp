#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)

using namespace std;

ll res(ll a, ll b){
    ll a1, a2, b1, b2;

    if(a%2 == 1){
        a1 = a/2;
        a2 = a/2 +1;
    }
    else{
        a1 = a/2;
        a2 = a1;
    }

    if(b%2 == 1){
        b1 = b/2;
        b2 = b/2 +1;
    }
    else{
        b1 = b/2;
        b2 = b1;
    }

    return a1*b1 + a2*b2;
}


int main(){

    int t;
    ll a, b;

    cin >> t;

    fori(t){
        cin >> a >> b;

        cout << res(a, b) << endl;
    }
    
}
