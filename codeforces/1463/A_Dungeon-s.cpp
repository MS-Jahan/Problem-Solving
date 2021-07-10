#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
using namespace std;

int main(){

    ll n, arr[3], delstat, flag, total;

    cin >> n;

    fori(n){
        cin >> arr[0] >> arr[1] >> arr[2];

        //flag = 0;
        
        sort(arr, arr+3);
        total = arr[0] + arr[1] + arr[2];

        if(total % 9 == 0 && (total / 9) <= arr[0]){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    
}