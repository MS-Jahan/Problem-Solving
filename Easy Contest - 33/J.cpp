#include <bits/stdc++.h>

using namespace std;

int main(){

    int A, B, C;

    cin >> A >> B >> C;

    if(B+C > A){
        cout << B + C - A << endl;
    }
    else{
        cout << 0 << endl;
    }

    return 0;

}

