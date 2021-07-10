#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define nl cout << endl;

using namespace std;

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    ll tc, m, c, mishka = 0, chris = 0;

    cin >> tc;

    while(tc--){
        cin >> m >> c;

        if(m > c){
            mishka++;
        }
        else if(c > m){
            chris++;
        }
    }

    if(mishka > chris){
        cout << "Mishka" << endl;
    }
    else if(chris > mishka){
        cout << "Chris" << endl;
    }
    else {
        cout << "Friendship is magic!^^" << endl;
    }
}