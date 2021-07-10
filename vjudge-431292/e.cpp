#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define nl cout << endl;
using namespace std;
 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    ll n, temp = 100, box;
    cin >> n;
    ll arr[n+1];
    arr[0] = 100;

    fori(n){
        if(i == 0){
            continue;
        }
        cin >> box;
        temp += box;
        arr[i] = temp;
    }

    sort(arr, arr+n+1);

    cout << arr[arr.size() - 1] << endl;
}

