#include <bits/stdc++.h>
using namespace std;

int main(){

    int ts, i, k;
    long long int a, b, counter;

    cin >> ts;

    for(i = 0; i < ts; i++){
        cin >> a >> b;
        counter = 0;
        k = 10;

        if(a != b){
            if(abs(a-b) % 10 == 0){
                counter = abs(a-b) / 10;
            }
            else{
                counter = (abs(a-b) / 10) + 1;
            }
        }

        cout << counter << endl;
    }


    return 0;

}
