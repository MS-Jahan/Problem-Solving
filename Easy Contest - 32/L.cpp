#include <bits/stdc++.h>

using namespace std;

int main(){

    unsigned long long N, i;

    cin >> N;

    for(i = 0; i <= N; i++){
        cout << i*i << endl;
        if(i*i > N){
            i--;
            break;
        }
    }
    cout << endl;
    cout << i*i << endl;

    return 0;
}




