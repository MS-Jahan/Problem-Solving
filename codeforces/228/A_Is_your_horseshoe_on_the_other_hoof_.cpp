#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define print(str) cout << str
#define nl cout << endl;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    ll arr[4], cnt = 0;

    fori(4){
        cin >> arr[i];
    }

    fori(4-1){
        for(int j = i+1; j < 4; j++){
            //cout << arr[i] << " " << arr[j] << endl;
            if(arr[i] == arr[j]){
                cnt++;
                break;
            }
        }
    }

    cout << cnt << endl;  
}