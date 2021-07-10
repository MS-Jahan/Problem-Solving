#include <bits/stdc++.h>
// #include <stdint.h>
// int64_t i2 = 0x0000444400004444LL;
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define nl cout << endl;
using namespace std;

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);

    ll t, j, sum, temp, num;
    string n;
    int flag;

    cin >> t;

    fori(t){
        cin >> num;
        n = to_string(num);
        flag = 0;
        temp = sqrt(num);
        forj(temp){
            if(num % j == 0){
                flag = 1;
                break;
            }
        }

        if(flag == 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
  
}
