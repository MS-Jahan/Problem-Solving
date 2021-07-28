#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define nl cout << endl;
using namespace std;

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    ll t, p_count = 1;

    cin >> t;
    ll arr[t];

    fori(t){
        cin >> arr[i];
    }

    sort(arr, arr+t);

    ll prev = -1;
    ll stat = 1;
    ll max_stat = 1;

    fori(t){
        if(arr[i] == prev){
            stat++;
            if(stat > max_stat){
                max_stat = stat;
            }
        }
        else{
            stat = 1;
        }

        prev = arr[i];
    }

    cout << max_stat << endl;

}