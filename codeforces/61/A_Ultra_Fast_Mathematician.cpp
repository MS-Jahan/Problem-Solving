#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define print(str) cout << str
#define nl cout << endl;
using namespace std;

int main(){

    string a, b;

    cin >> a >> b;

    fori(a.length()){
        if(a[i] != b[i]){
            cout << 1;
        }
        else{
            cout << 0;
        }
    }

    nl;
    
}