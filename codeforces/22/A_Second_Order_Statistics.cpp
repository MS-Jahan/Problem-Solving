#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(int i = 0; i < n; i++)
#define forj(n) for(int j = 0; j < n; j++)
using namespace std;

int main(){

    int n, a;

    cin >> n;
    vector<int> v;

    fori(n){
        cin >> a;
        auto it = find(v.begin(), v.end(), a);
        if (it != v.end()){
            ;
        }
        else {
            v.push_back(a);
        }
    }

    sort(v.begin(), v.end());

    if(v.size() >= 2){
        cout << v[1] << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
}