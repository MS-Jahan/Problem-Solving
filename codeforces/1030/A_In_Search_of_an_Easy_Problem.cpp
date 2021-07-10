#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define nl cout << endl;
using namespace std;

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);

    ll n, o;
    string res = "EASY";

    cin >> n;

    fori(n){
        cin >> o;

        if(o == 1){
            res = "HARD";
        }
    }

    cout << res << endl;
}