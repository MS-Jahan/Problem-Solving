#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define print(str) cout << str
#define nl cout << endl;
using namespace std;

int main(){

    int n, h, l = 0, c = 0;
    cin >> n;

    int arr[n];

    fori(n){
        cin >> arr[i];
    }

    h = arr[0];
    l = arr[0];

    fori(n){
        if(arr[i] > h){
            h = arr[i];
            c++;
        }
        else if(arr[i] < l){
            l = arr[i];
            c++;
        }
    }

    cout << c;
    nl;
    
}