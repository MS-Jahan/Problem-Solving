#include <bits/stdc++.h>
using namespace std;

int main(){

    long int ts, a, b, mn, mx;

    cin >> ts;

    for(int i = 0; i < ts; i++){
        cin >> a >> b;
        mn = min(a, b);
        mx = max(a, b);

        mn *= 2;

        if(mn > mx){
            mx += mn - mx;
        }
        else if(mx > mn){
            mn += mx - mn;
        }

        cout << mn * mx << endl;
    }


}
