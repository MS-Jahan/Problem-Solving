#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define nl cout << endl;
using namespace std;

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    ll t, n, num, even, odd;

    cin >> t;

    while(t--){
        cin >> n;
        even = 0; odd = 0;
        fori(n*2){
            cin >> num;
            if(num % 2 == 0){
                even++;
            }
            else{
                odd++;
            }
        }
        
        if(even != odd){
                cout << "No" << endl;
        }
        else{
            cout << "Yes" << endl;
        }
    }
}