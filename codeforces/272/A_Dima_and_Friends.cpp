#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define print(str) cout << str
#define nl cout << endl;
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
    //cout << "clear" << endl;
    int n, fingers = 0, temp, i, cnt = 0;

    cin >> n;

    fori(n){
        cin >> temp;
        fingers += temp;
    }

    //n++;

    i = 1;
    
    while(i <= 5){
        //cout << "c " << (fingers+i) % (n+1) << endl;
        if((fingers+i) % (n+1) != 1){
            cnt++;
        }
         i++;
    }



    cout << cnt << endl;
}