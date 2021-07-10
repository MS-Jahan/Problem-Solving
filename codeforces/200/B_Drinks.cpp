#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define print(str) cout << str
#define nl cout << endl;
using namespace std;

int main(){

    int n;
    long double temp;
    vector<long double> v; 

    cin >> n;

    fori(n){
        cin >> temp;
        v.push_back(temp);
    }

    long double res = 0.0;

    fori(n){
        res +=(long double) v[i];
    }
    //cout << res << " ";
    res = res / n;

    printf("%0.12Lf", res); 
    
}