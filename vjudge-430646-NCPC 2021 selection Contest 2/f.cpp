

#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define nl cout << endl;
using namespace std;
 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);

    ll t, n, k, given_ones, present_ones, stat;
    string s; 
    char temp;

    cin >> t;
    fori(t){
        s = "";
        given_ones = 0;
        cin >> n >> k;

        forj(n){
            cin >> temp;
            if(temp == '1'){
                given_ones++;
            }

            s += temp;
        }
        //cout << s << endl;        

        stat = k;
        present_ones = 0;

        forj(n){
            if(j == 0){
                s[i] = '1';
                present_ones++;
                stat--;
                continue;
            }
            if(stat != 0){
                if(s[i] == '1'){
                    s[i] = '0';
                }
            }
            else{
                s[i] = '1';
                stat = k;
                present_ones++;
            }
        }

        if(present_ones > given_ones){
            cout << present_ones - given_ones << endl;
        }
        else{
            cout << 0 << endl;
        }
    }
    
 
}

