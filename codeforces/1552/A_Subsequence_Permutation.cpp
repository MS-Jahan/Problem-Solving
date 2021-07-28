#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define nl cout << endl;
using namespace std;

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    ll ts, n;
    cin >> ts;
    while(ts--){
        cin >> n;
        string s, t;
        ll res = 0;
        cin >> s;
        t = s;
        sort(t.begin(), t.end());

        fori(t.length()){
            if(s[i] != t[i]){
                res++;
            }
        }

        cout << res << endl;
    }

}