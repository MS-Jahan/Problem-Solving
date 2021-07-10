#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define nl cout << endl;
using namespace std;
 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    ll t, n, plus, minus, stat_minus_found, stat_minus_resolved;
    scanf("%lld", &t);

    fori(t){
        scanf("%lld", &n);
        ll arr[n];

        plus = 0;
        minus = 0;
        forj(n){
            scanf("%lld", &arr[j]);

            if(arr[j] > 0){
                plus += arr[j];
            }
            else{
                stat_minus_found = 1;
                if(stat_minus_found)
                minus++;
            }
        }

        printf("Case %lld: %lld %lld\n", i+1, plus, minus);
    }
}

