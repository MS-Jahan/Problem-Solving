#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define print(str) cout << str
#define nl cout << endl;
using namespace std;

int main(){
    
    int n, m, p, flag;

    cin >> n >> m;

    for(int i = n+1; i <= m; i++){
        flag = 0;
        for(int j = 2; j < i; j++){
            if(i % j == 0){
                flag = 1;
                break;
            }
        }

        if(flag == 0){
            if(i == m)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
            break;
        }
    }

    if(flag == 1){
        cout << "NO" << endl;
    }

    
}