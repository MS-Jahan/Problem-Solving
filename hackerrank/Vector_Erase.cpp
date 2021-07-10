#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long

int main() {
    
    ll ts, p, p1, p2, len, a;
    vector<ll> v;
    
    cin >> ts;
    
    for(ll i = 0; i < ts; i++){
        cin >> a;
        v.push_back(a);
    }
    
    cin >> p >> p1 >> p2;
    
    v.erase(v.begin()+p-1);
    v.erase(v.begin()+(p1-1), v.begin()+(p2-1));
    cout << v.size() << endl;
    for(ll i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;

    
    
    return 0;
}
