#include <iostream>
#include <utility>
#include <vector>

#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define nl cout << endl;
using namespace std;
        
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);

    ll n;
    cin >> n;

    fori(n){
        vector<ll> queries[1000000];
        vector<ll> freq[1000000];

        forj(n){
            ll x;
            cin >> x;
            queries.push_back(x);
        }
        

    }   
}