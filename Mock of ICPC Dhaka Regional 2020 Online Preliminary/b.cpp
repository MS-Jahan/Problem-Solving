#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define fork(n) for(ll k = 0; k < n; k++)
#define nl cout << endl;
using namespace std;
 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    ll t, n, temp, result;
    cin >> t;

    fori(t){
        cin >> n;
        ll arr[n];

        forj(n){
            cin >> arr[j]; 
        }

        sort(arr, arr + n);

        if(n == 1){
            result = arr[0] * arr[0];
        }
        else if(n == 2){
            result = arr[0] * arr[1];
        }
        else{
            if(n % 2 == 0){
                result = arr[(n/2)-1] * arr[(n/2)];
            }
            else{
                result = arr[(n/2)] * arr[(n/2)];
            }
        }

        cout << "Case " << i+1 << ": " << result << endl;
    }
}
