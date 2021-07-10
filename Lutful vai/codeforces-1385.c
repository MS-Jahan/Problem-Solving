#include <bits/stdc++.h>
using namespace std;

int main(){

    long long int tc, x, y, z, a, b, c;

    cin >> tc;

    for(int i = 0; i < tc; i++){
        cin >> x >> y >> z;

        if(x == y && y == z){
            cout << "YES" << endl;
            cout << x << " "  << y << " " << z << " " << endl;
        }

        if(x == y){
            a = x;
        }

        if(y == z){
            c = y;
        }

        if(x == z){
            b = x;
        }

    }


}
