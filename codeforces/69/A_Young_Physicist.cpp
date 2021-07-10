#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define print(str) cout << str
#define nl cout << endl;
using namespace std;

int main(){

    ll n, a, b, c, sumx = 0, sumy = 0, sumz = 0;
    cin >> n;

    fori(n){
        cin >> a >> b >> c;
        sumx += a; 
        sumy += b;
        sumz += c;
    }

    if(sumx == sumy == sumz == 0){
        print("YES");
        nl;
    }
    else{
        print("NO");
        nl;
    }    
    
}