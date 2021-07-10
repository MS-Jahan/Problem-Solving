#include <bits/stdc++.h>
using namespace std;

int dTb(int n){

    int mult = 1, res = 0;

    while(n > 0){
        res += (n % 2) * mult;
        mult *= 10;
        n /= 2;
    }

    return res;
}


int main(){

    int a, b, c, d, ts;
    long int e, f, g, h;
    char s;
    cin >> ts;

    for(int i = 1; i <= ts; i++){
        cin >> a >> s >> b >> s >> c >> s >> d;
        cin >> e >> s >> f >> s >> g >> s >> h;

        cout << "Case " << i << ": ";
        if(dTb(a) == e && dTb(b) == f && dTb(c) == g && dTb(d) == h){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }



}
