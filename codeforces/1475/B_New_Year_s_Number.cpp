#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define nl cout << endl;
using namespace std;

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);

    ll ts, n, sum, flag;

    fori(ts){
        cin >> n;
        flag = 0;
        sum = 0;

        while(1){
            if(sum == n){
                flag = 1;
                break;
            }
            
            sum += 2020;
        }
    }
    
}
