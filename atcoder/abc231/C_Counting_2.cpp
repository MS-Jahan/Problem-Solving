#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define nl cout << endl;
using namespace std;
        
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);

    ll n, q, s, query;

    cin >> n;
    cin >> q;
    vector<ll> a(n);

    fori(n){
        cin >> s;
        a.push_back(s);
    }

    fori(n){
        cout << a[i] << " " << i << endl;
    }
    

    fori(q){
        ll counter = 0;
        cin >> query;
        // cout << a[j] << " " << query << endl;
        for(ll j = 0; j < n; j++){
            if(a[j] > query){
                counter++;
            }
        }
        cout << counter << endl;
    }

}