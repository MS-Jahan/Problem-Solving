#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define nl cout << endl;
using namespace std;

// string multiply(string a, ll n){
//     string b = "";
//     while(n--){
//         b += a;
//     }

//     return b;
// }

ll power(ll a, ll b){
    ll z = 1;
    while(b--){
        z *= a;
    }
    return z;
}

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    ll t, num;
    string s;

    bool isRound = true;

    cin >> t;

    while(t--){
        cin >> num;
        s = to_string(num);
        for(ll i = 1; i < s.length(); i++){
            if(s[i] != '0'){
                isRound = false;
                break;
            }
        }

        // if(isRound == true){
        //     cout << 1 << endl << s << endl;
        //     return 0;
        // }

        //ll num = stol(s);
        ll numarr[100] = {0};
        ll i = 0;
        
        while(num){
            ll length = to_string(num).length();
            //string numS = to_string(num); // "5009"
            //ll length = numS.length();
            ll tenz = power(10, length-1); // 1000
            ll first_digit = num/tenz; // 5
            numarr[i] = first_digit*tenz; // 5000
            //cout << first_digit << " " << tenz << endl; // 5 1000
            num = num - numarr[i]; // 9
            i++;
        }

        cout << i << endl;
        forj(i){
            cout << numarr[j];

            if(j != i-1){
                cout << " ";
            }
        }

        nl;
    }
}