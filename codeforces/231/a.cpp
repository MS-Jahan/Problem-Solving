#include <bits/stdc++.h>
using namespace std;

int main(){

    int ts, a, s, d, counter = 0;

    cin >> ts;

    for(int i = 0; i < ts; i++){
        cin >> a >> s >> d;
        if(a + s + d >= 2){
            counter++;
        }
    }

    cout << counter << endl;

}
