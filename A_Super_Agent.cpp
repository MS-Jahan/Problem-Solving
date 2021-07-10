#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define nl cout << endl;
using namespace std;

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    string s[3];

    fori(3){
        cin >> s[i];
    }

    cout << ((s[0][0] == s[2][2] && s[0][1] == s[2][1] && s[0][2] == s[2][0] && s[1][0] == s[1][2]) ? "YES" : "NO") << endl;

}