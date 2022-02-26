#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define nl cout << endl;
using namespace std;

// ll largest(vector<ll> nums){
//     return max();
// }

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    ll n, num, s = 0, d = 0, stat = 1;
    vector<ll> nums;
    vector<ll>::iterator it;

    cin >> n;
    fori(n){
        cin >> num;
        nums.push_back(num);
    }

    while(nums.size() > 0){
        it = *nums.begin() >= *(nums.end()-1) ? nums.begin() : nums.end()-1;

        if(stat == 1){
            stat = 2;
            s += *it;
        }
        else{
            d += *it;
            stat = 1;
        }
        
        nums.erase(it);
    }

    cout << s << " " << d << endl;
}