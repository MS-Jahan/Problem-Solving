#include <bits/stdc++.h>

using namespace std;

int main(){

    int N, A;

    cin >> N >> A;

    //cout << N/500 << " " << (N/500)*500 << " " << N%500 << endl;
    if(N % 500 <= A){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;

}


