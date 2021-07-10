#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define print(str) cout << str
#define nl cout << endl;
using namespace std;

int main(){

    int n, temp, res;

    cin >> n;

    vector<int> v;

    fori(n){
        cin >> temp;
        v.push_back(temp);
    }

    int maxN = *max_element(v.begin(), v.end());
    int minN = *min_element(v.begin(), v.end());

    int maxNindex = max_element(v.begin(), v.end()) - v.begin();
    int minNindex = min_element(v.begin(), v.end()) - v.begin();
    
    res = maxNindex;

    //cout << res << " ";

    fori(v.size()){
        if(v[i] == minN){
            minNindex = i;
        }
    }

    if(maxNindex > minNindex){
        res += n - (minNindex+2);
    }
    else{
        res += n - (minNindex+1);
    }

    cout << res << endl;
}