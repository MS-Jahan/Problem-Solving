#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(int i = 0; i < n; i++)
#define forj(n) for(int j = 0; j < n; j++)
using namespace std;

int main(){

    int ts, n, k;

    cin >> ts;

    fori(ts){
        cin >> n >> k;

        forj(k){
            if(j+1 > n){
                break;
            }
            cout << j+1;

            if(j+1 == n){
                cout << endl;
            }
            else{
                cout << " ";
            }
        }
    }
    
}