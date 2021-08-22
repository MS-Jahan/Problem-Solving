#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define nl cout << endl;
using namespace std;

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    ll ts, n, temp;

    cin >> ts;

    while(ts--){
        cin >> n;
        ll nn = n;
        ll first_big = 0;
        ll second_big = 0;
        ll arr[n];
        ll i = -1;
        while(n--){
            i++;
            cin >> temp;
            arr[i] = temp;
            if(arr[i]>arr[first_big]){
                first_big = i;
            }
            else{
                if(arr[i] > arr[second_big]){
                    second_big = i;
                }
            }
        }
        // cout << arr[first_big] << " " << arr[second_big] << endl;
        cout << arr[first_big] * arr[second_big] << endl;

        // cout << endl;

        // fori(nn){
        //     cout << arr[i] << endl;
        // }
    }
}