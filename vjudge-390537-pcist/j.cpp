#include <bits/stdc++.h>

using namespace std;

int main(){

    int ts, n;

    cin >> ts;

    for(int i = 0; i < ts; i++){
        cin >> n;
        if(n < 10){
            cout << "Thanks for helping Chef!" << endl;
        }
        else{
            cout << "-1" << endl;
        }
    }

    return 0;
}


