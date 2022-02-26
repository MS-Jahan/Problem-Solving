#include <iostream>
#include <utility>
#include <vector>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define nl cout << endl;
using namespace std;
        
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    ll t, n, x, y;

    cin >> t;

    fori(t){
        cin >> n;
        vector<pair<ll, ll>> g1;

        forj(n){
            pair<ll, ll> last_pair;

            pair<ll, ll> P;
            cin >> P.first >> P.second;

            g1.push_back(P);
        }

        // forj(n){
        //     cout << g1[j].first << " " << g1[j].second << endl;
        // }

        ll distance = 0;
        forj(n){
            ll current_index = j;

            pair<ll, ll> parent = g1[current_index];

            while(current_index < n){
                pair<ll, ll> current = g1[current_index];
                // if(current_index == 0){
                //     pair<ll, ll> current = g1[current_index];
                // }
                // else{
                //     pair<ll, ll> current = g1[current_index+1];
                // }

                //cout << parent.first << " " << parent.second  << " | " << current.first << " " << current.second << endl;

                ll dist = abs(parent.first - current.first) + abs(parent.second - current.second);
                distance += dist;
                current_index++;
            }
        }

        cout << distance << endl;
    }
}