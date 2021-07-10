#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define nl cout << endl;
using namespace std;
 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    ll t, n, num1, n1, n1i, num2, n2, n2i, num;

    cin >> t;

    fori(t){
        cin >> n;
        n1 = 0;
        n2 = 0;

        forj(n){
            cin >> num;

            if(j == 0){
                num1 = num;
                n1++;
                n1i = j+1;
            }
            else{
                if(num != num1){
                    n2++;
                    n2i = j+1;
                }
                else{
                    n1++;
                    n1i = j+1;
                }
            }

            //cout << num << " | " << num1 << " " << n1i << " " << num2 << " " << n2i << endl;
        }

        if(n1 > n2)
            cout << n2i << endl;
        else
            cout << n1i << endl;
    }
}
