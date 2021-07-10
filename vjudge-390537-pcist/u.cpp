#include <bits/stdc++.h>
using namespace std;

int main(){

    long int n, i, prev, curr, temp;

    cin >> n;

    prev = 0;
    curr = 1;
    for(i = 1; i <= n; i++){
        temp = curr;
        curr = curr + prev;
        prev = temp;
    }

    cout << curr << endl;


    return 0;

}

