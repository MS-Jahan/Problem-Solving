#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define print(str) cout << str
#define nl cout << endl;
using namespace std;

int main(){
    
    int n, l, r, left = 0, right = 0, res = 0;

    cin >> n;

    fori(n){
        cin >> l >> r;
        if(l == 1){
            left++;
        }

        if(r == 1){
            right++;
        }
    }

    // For left

    if(left >= (n-left)){
        res += n - left;
    }
    else{
        res += left;
    }

    // For Right

    if(right >= (n-right)){
        res += n - right;
    }
    else{
        res += right;
    }
    
    cout << res << endl;

}