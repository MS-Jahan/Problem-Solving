#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define print(str) cout << str
#define nl cout << endl;
using namespace std;

int main(){

    int n, l;
    string str;

    cin >> n >> l >> str;

    forj(l){
        fori(n){
            if(str[i] == 'B' && str[i+1] == 'G'){
                swap(str[i], str[i+1]);
                i++;
            }
        }
    }

    cout << str << endl;
    
}