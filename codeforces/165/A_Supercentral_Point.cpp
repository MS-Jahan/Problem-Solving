#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define print(str) cout << str
#define nl cout << endl;
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
    
    int n, i, j, c = 0;

    cin >> n;

    vector<pair<int,int>> v(n);

    fori(n){
        cin >> v[i].first >> v[i].second;
    }

    i = 0;
    while(i < n){
        j = 0;
        int flag[4] = {0};
        while(j < n){
            if(v[i].first == v[j].first){
                if(v[i].second > v[j].second){
                    flag[0] = 1;
                }

                if(v[i].second < v[j].second){
                    flag[1] = 1;
                }
            }

            if(v[i].second == v[j].second){
                if(v[i].first > v[j].first){
                    flag[2] = 1;
                }

                if(v[i].first < v[j].first){
                    flag[3] = 1;
                }
            }

            j++;

            if(flag[0] == 1 && flag[1] == 1 && flag[2] == 1 && flag[3] == 1){
                c += 1;
                break;
            }
        }
        i++;
    }

    cout << c << endl;
    
}