#include <bits/stdc++.h>
using namespace std;

int main(){

    long int n, k;
    string c;
    cin >> n >> k;

    while(k != 0){
        c = to_string(n);
        //cout << c << endl;
        if(c[c.length() - 1] == '0'){
            n /= 10;
        }
        else{
            n -= 1;
        }

        k--;
    }

    cout << n << endl;

}
