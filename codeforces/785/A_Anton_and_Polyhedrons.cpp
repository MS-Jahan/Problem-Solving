#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define nl cout << endl;
using namespace std;

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);

    ll n, sides = 0;
    cin >> n;
    string s;

    fori(n){
        cin >> s;
         
        if(s == "Tetrahedron"){
            sides+= 4;
        }
        else if(s == "Cube"){
            sides+=6;
        }
        else if(s == "Octahedron"){
            sides+=8;
        }
        else if(s == "Dodecahedron"){
            sides+=12;
        }
        else if(s == "Icosahedron"){
            sides+=20;
        }
    }

    cout << sides << endl;
}