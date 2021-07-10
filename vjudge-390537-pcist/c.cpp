#include <bits/stdc++.h>

using namespace std;

int main(){

    long int N;

    cin >> N;

    if(N == 1){
        cout << "Alice\n" << endl;
    }
    else if(N % 2 != 0){
        cout << "Alice\n" << endl;
    }
    else{
        cout << "Bob\n" << endl;
    }

    return 0;
}
