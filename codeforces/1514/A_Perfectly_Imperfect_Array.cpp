#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define nl cout << endl;
using namespace std;
 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    ll t, n;

    cin >> t;

    while(t--){
        cin >> n;
        ll arr[n];

        fori(n){
            cin >> arr[i];    
        }

        ll found = 0;

        fori(n-1){
            // cout << i << " " << i + 1 << " " << endl;
            for(ll j = 0; j < n-1; j++){
                if(i == j){
                    continue;
                }

                ll temp = arr[i] * arr[j];

                if(sqrt(temp) * sqrt(temp) != temp){
                    found = 1;
                    break;
                }
            }

            if(found == 1){
                break;
            }
        }

        if(found == 1){
            cout << "YES" << endl;
        } 
        else{
            cout << "NO" << endl;
        }
    }
    
}
