#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define nl cout << endl;
using namespace std;


// ll getIndex(vector<ll> v, ll K)
// {   
//     ll index = -1;
//     auto it = find(v.begin(), v.end(), K);
//     if (it != v.end())
//     {
//         index = it - v.begin();
//     }

//     return index;
// }


int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);
  
    ll n, temp, sum = 0;
    cin >> n;
    ll v[n+1];
    ll indexes[n+1];
    

    fori(n){
        cin >> temp;
        v[i] = temp;
        indexes[temp-1] = i;
    }

    //cout << "here" <<endl;

    fori(n-1){
        sum += abs(indexes[i] - indexes[i+1]);
    }
    
    cout << sum << endl;
}

