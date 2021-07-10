#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
using namespace std;

int main(){

    ll ts, n, temp, half_len, index, stat, c;

    cin >> ts;

    fori(ts){
        cin >> n;
        vector<ll> input;
        forj(n){
            cin >> temp;
            input.push_back(temp);
        }

        index = 0;
        stat = 0;

        half_len = n / 2 + (n%2);

        c = 0;

        while(index < half_len){
            if(c < n){
                if(stat == 0){
                    cout << input[index];
                    stat = 1;
                    c++;
                }
            }
            else{
                break;
            }
            
            cout << " ";

            if(c < n){
                if(stat == 1){
                    cout << input[n-(1+index)];
                    stat = 0;
                    c++;
                }
            }
            else{
                break;
            }

            cout << " ";

            index++;
        }

        cout << endl;
    }
}
