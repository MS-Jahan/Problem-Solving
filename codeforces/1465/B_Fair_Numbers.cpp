#include <bits/stdc++.h>
#define ll unsigned long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define print(str) cout << str
#define nl cout << endl;
using namespace std;

ll res(ll n){
    string v = to_string(n);
    ll len = v.length();
    int temp;

    for(ll j = 0; j < len; j++){
        temp = v[j] - '0';
        //cout << "temp " << temp << " n " << n << " j " << j << endl;
        if(temp == 0){
            ;
        }
        else if(n % temp != 0){
            //cout << "level e nai" << endl;
            n++;
            j = -1;
            v = to_string(n);
            len = v.length();
        }
    }

    return n;
}

int main(){
ios_base::sync_with_stdio(false);

    ll ts, n;
    //string n;

    cin >> ts;

    fori(ts){
        cin >> n;
        cout << res(n);
        nl;
               
    }   
    
}