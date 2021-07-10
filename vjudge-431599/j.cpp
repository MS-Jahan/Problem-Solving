#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define nl cout << endl;
using namespace std;

ll getSum(ll arr[], ll n){
    ll t = pow(2, n-1);
    ll sum = 0;
    fori(n){
        sum += arr[i] * t;
    }

    return sum;
}

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    ll n;
    cin >> n;

    ll arr[n];

    fori(n){
        cin >> arr[i];
    }

    cout << getSum(arr, n) << endl;
}

