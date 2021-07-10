#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define print(str) cout << str
#define nl cout << endl;
using namespace std;

int main(){

    string str;

    cin >> str;

    fori(str.length()){
        if(str[i] == '.'){
            cout << "0";
        }
        else if (str[i] == '-' && str[i+1] == '.'){
            cout << "1";
            i++;
        }
        else if (str[i] == '-' && str[i+1] == '-'){
            cout << "2";
            i++;
        }
    }   
    nl;
}