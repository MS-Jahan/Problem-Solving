#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define nl cout << endl;
using namespace std;
 

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);

    ll t, n, temp;
    string num;
    cin >> t;

    fori(t){
        cin >> n;
        num = "";
        int j = 0;
        while(n--){
            temp = 9-j;
            num += to_string(temp);

            j++;
            if(j == 10){
                j = 0;
            }
        }

        cout << num << endl;
    }
}