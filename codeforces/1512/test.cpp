#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define nl cout << endl;
using namespace std;

bool arrayDiff(ll arr1[], ll arr2[]){
    ll n = 2;
    fori(n){
        forj(n){
            if((arr1[i] != arr2[i]) || (arr1[j] != arr2[j])){
                return false;
            }
        }
    }
    return true;
}

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    // ll arr[2] = {2, 1};
    // ll arr1[2] = {2, 1};

    // cout << arrayDiff(arr, arr1) << endl;

    // char c,d,e;
    // cin >> c >> d >> e;
    // cout << c << " " << d << " " << e << endl;

    ll n = 10;

    while(n--){
        cout << n << endl;
    }
}