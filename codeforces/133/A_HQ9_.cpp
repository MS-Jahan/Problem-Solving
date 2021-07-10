#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define print(str) cout << str
#define nl cout << endl;
using namespace std;

int main(){
ios_base::sync_with_stdio(false);

    int flag = 0;
    string a;

    cin >> a;

    fori(a.length()){
        if(a[i] == 'H' || a[i] == 'Q' || a[i] == '9'){
            cout << "YES"; nl;
            flag = 1;
            break;
        }
    }

    if(flag == 0){
        cout << "NO"; nl;  
    }
    
}