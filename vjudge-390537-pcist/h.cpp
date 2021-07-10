#include <bits/stdc++.h>

using namespace std;

int main(){

    int ts, n;

    cin >> ts;

    for(int i = 0; i < ts; i++){
        cin >> n;
        if(n % 2 == 0){
            cout << n << " is even" << endl;
        }
        else{
            cout <<n << " is odd" << endl;
        }
    }

    return 0;
}


