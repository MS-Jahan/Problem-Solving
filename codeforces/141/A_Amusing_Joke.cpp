#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define print(str) cout << str
#define nl cout << endl;
using namespace std;

int main(){
ios_base::sync_with_stdio(false);

    string s1, s2, str, st;

    cin >> s1 >> s2 >> str;

    st = s1+s2;

    sort(str.begin(), str.end());
    sort(st.begin(), st.end());

    if(st == str){
        cout << "YES";
        nl;
    }
    else{
        cout << "NO";
        nl;
    }
}