#include <bits/stdc++.h>
using namespace std;

int main(){

    long int a, b, ts;

    cin >> ts;

    for(int i = 0; i < ts; i++){
        cin >> a >> b;

        if(a % b == 0){
            cout << 0 << endl;
        }
        else{
            cout << b - (a % b) << endl;
        }

    }


}
