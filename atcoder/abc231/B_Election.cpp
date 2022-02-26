#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define nl cout << endl;
using namespace std;
        
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    ll n; 
    string s;
    vector<string> v;
    vector<string> v_unique;

    cin >> n;

    fori(n){
        cin >> s;
        v.push_back(s);
    }

    v_unique = v;

    v_unique.erase(unique(v_unique.begin(), v_unique.end()), v_unique.end());

    vector<ll> sizes;

    ll greater_index;
    ll greater_size = 0;

    fori(v_unique.size()){
        ll countt;
        countt = count(v.begin(), v.end(), v_unique[i]);
        sizes.push_back(countt);

        if(greater_size < countt){
            greater_size = countt;
            greater_index = i;
        }
    }

    cout << v_unique[greater_index] << endl;

    
}