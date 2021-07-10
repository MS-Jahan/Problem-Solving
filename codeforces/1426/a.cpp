#include <bits/stdc++.h>
using namespace std;

int main(){

    int ts, n, x, j, counter;

    cin >> ts;

    for(int i = 0; i < ts; i++){
        cin >> n >> x;
        counter = 1;
        j = 2;

        while(j < n){
            counter++;
            j += x;
        }

        cout << counter << endl;
    }

}
