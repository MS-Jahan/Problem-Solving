#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define print(str) cout << str
#define nl cout << endl;
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
    
    ll n, m, p1 = 0, p2 = 0, temp;

    cin >> n;

    ll arr[n+3];

    for(ll i = 1; i <= n; i++){
        cin >> temp;
        arr[temp] = i;
    }

    cin >> m;


    while(m--){
        cin >> temp;

        p1 += arr[temp];
        p2 += (n + 1 - arr[temp]);
    }

    cout << p1 << " " << p2 << endl;

    
}