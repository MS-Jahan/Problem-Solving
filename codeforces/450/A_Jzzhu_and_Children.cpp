#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define print(str) cout << str
#define nl cout << endl;
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
    
    int n, m, temp, last;

    cin >> n >> m;

    vector<int> v;
    //vector<int> w;

    fori(n){
        cin >> temp;
        v.push_back(temp);
    }
    //w = v;
    int i = 0;

    int len = v.size();

    while(len){
        fori(n){
            if(v[i] > 0){
                v[i] -= m;
                if(v[i] <= 0){
                    last = i + 1;
                    len--;
                }
            }
        }
    }

    cout << last << endl;
}   