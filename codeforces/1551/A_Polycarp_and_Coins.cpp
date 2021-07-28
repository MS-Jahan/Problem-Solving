#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define nl cout << endl;
using namespace std;
        
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);

    ll ts, c1, c2, n;

    cin >> ts;

    while(ts--){
        cin >> n;

        if(n % 3 == 0){
            c1 = n / 3;
            c2 = c1;
        }
        else{
            c1 = n / 3;
            ll temp = (n - c1);

            if(temp % 2 ==0){
                c2 = temp/2;
            }
            else{
                c2 = (temp+1)/2;
            }

            if(c1+2*c2 == n){
                //
            }else{
                temp = c2;
                c2 = c1;
                c1 = temp;
            }
        }

        cout << c1 << " " << c2 << endl;
    }
}