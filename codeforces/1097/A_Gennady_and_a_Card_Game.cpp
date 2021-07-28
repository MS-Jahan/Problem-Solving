#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define nl cout << endl;
using namespace std;


int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    string n;
    char t[20];

    cin >> n;

    cin.getline(t,sizeof(t));
    cin.getline(t,sizeof(t));
    
    string stat = "NO";
    string ts = string(t);

    if(ts.find(n[0]) != string::npos || ts.find(n[1]) != string::npos){
        stat = "YES";
    }
    else{
        stat = "NO";
    }

    cout << stat << endl;
}