#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define nl cout << endl;
using namespace std;

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);

    ll res;
    string s;

    cin >> s;

    ll numOfA = count(s.begin(), s.end(), 'a');

    if(numOfA > (s.length()/2)){
        res = s.length();
    }
    else if(numOfA == (s.length()/2) + s.length()%2){
        res = s.length()-1;
    }
    else{
        res = (numOfA*2)-1;
    }

    cout << res <<  endl;
}