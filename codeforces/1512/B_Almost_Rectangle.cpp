#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define fork(n) for(ll k = 0; k < n; k++)
#define nl cout << endl;
using namespace std;

bool arrayDiff(ll arr1[], ll arr2[]){
    ll n = 2;
    fori(n){
        forj(n){
            if((arr1[i] != arr2[i]) || (arr1[j] != arr2[j])){
                return false;
            }
        }
    }
    return true;
}

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    ll t, n, w[2], x[2], y[2], z[2], first_one_got;
    char c;
    string s;

    cin >> t;

    while(t--){
        cin >> n;
        first_one_got = 0;
        // c = '-';
        // first_one_got = 0;
        // forj(n){
        //     ll k = 0;
        //     while(1){
        //         c = getchar();
        //         if(c == '\n' || c == '\r' || c == '\n'){
        //             break;

        //         } else if(c == '*'){
                    // if(first_one_got != 1){
                    //     first_one_got = 1;
                    //     w[0] = j;
                    //     w[1] = k;

                    // } else{
                    //     x[0] = j;
                    //     x[1] = k;
                    // }
        //         }

        //         k++;
        //     }
        // }

        string s;
        //cin >> n;
        ll k = 0;
        fori(n){
            cin >> s;
            ll zzz = s.length();
            forj(zzz){
                if(s[j] == '*'){
                    if(first_one_got != 1){
                        first_one_got = 1;
                        w[0] = k;
                        w[1] = j;

                    } else{
                        x[0] = k;
                        x[1] = j;
                    }
                }
            }
            k++;
        }

        //cout << w[0] << " " << w[1] << ", " << x[0] << ' ' << x[1] << ", " << endl;

        // if(w[1] > x[1]){
        //     y[1] = x[1];
        // }
        // else if(w[1] == x[1]){
        //     if(w[1] == n-1){
        //         y[1] = w[1]-1;
        //     }
        //     else{
        //         y[1] = w[1]+1;
        //     }
        // }
        // else{
        //     y[1] = w[1];
        // }

        if(w[0] == x[0]){ // if in the same row
            if((n-1) > w[0]){
                y[0] = w[0] + 1;
                y[1] = w[1];
                z[0] = x[0] + 1;
                z[1] = x[1];
            }
            else if((n-1) == w[0]){
                y[0] = w[0] - 1;
                y[1] = w[1];
                z[0] = x[0] - 1;
                z[1] = x[1];
            }
        }
        else if(w[1] == x[1]){ // if in the same column
            if((n-1) > w[1]){
                y[1] = w[1] + 1;
                y[0] = w[0];
                z[1] = x[1] + 1;
                z[0] = x[0];
            }
            else if((n-1) == w[1]){
                y[1] = w[1] - 1;
                y[0] = w[0];
                z[1] = x[1] - 1;
                z[0] = x[0];
            }
        }
        else {
            y[1] = w[1];
            y[0] = x[0];

            z[0] = w[0];
            z[1] = x[1];
        }

        //cout << w[0] << " " << w[1] << ", " << x[0] << ' ' << x[1] << ", " << y[0] << ' ' << y[1] << ", " << z[0] << ' ' << z[1] << " " <<   endl;

        ll rowCol[2] = {0, 0};
        fori(n){
            rowCol[1] = 0;
            forj(n){
                if(arrayDiff(rowCol, w) || arrayDiff(rowCol, x) || arrayDiff(rowCol, y) || arrayDiff(rowCol, z)){
                    cout << "*";
                }
                else{
                    cout << ".";
                }
                rowCol[1]++;
                //cout << rowCol[1] << endl;
            }
            cout << endl;
            rowCol[0]++;
        }
    }

}

