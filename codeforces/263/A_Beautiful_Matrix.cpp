#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define nl cout << endl
using namespace std;

int main(){

    ll arr[5], x, y, res;

    fori(5){
        forj(5){
            cin >> arr[j];
            if(arr[j] == 1){
                x = i + 1;
                y = j + 1;
            }
        }
    }

    res = abs(3 - x) + abs(3 - y);

    cout << res;
    nl;
    
}