#include <bits/stdc++.h>
using namespace std;

int main(){

    long int ts, a, b, r;

    cin >> ts;

    for(int i = 0; i < ts; i++){
        cin >> a >> b;
        r = 0;

        if(a != b){
            r = abs(a - b) / 10;

            if(abs(a - b) % 10 != 0){
                r += 1;
            }
        }
        cout << r << endl;
    }

}
