#include <bits/stdc++.h>

using namespace std;

int main(){

    int num, n, s[13] = {0}, h[13] = {0}, c[13] = {0}, d[13] = {0};
    string ch;
    cin >> num;

    for(int i = 0; i < num; i++){
        cin >> ch >> n;
        if(ch == "S"){
            s[n-1] = 1;
        }
        else if(ch == "H"){
            h[n-1] = 1;
        }
        else if(ch == "C"){
            c[n-1] = 1;
        }
        else if(ch == "D"){
            d[n-1] = 1;
        }
    }

    for(int i = 0; i < 13; i++){
        if(s[i] == 0){
            cout << "S " << i+1 << endl;
        }
    }

    for(int i = 0; i < 13; i++){
        if(h[i] == 0){
            cout << "H " << i+1 << endl;
        }
    }

    for(int i = 0; i < 13; i++){
        if(c[i] == 0){
            cout << "C " << i+1 << endl;
        }
    }

    for(int i = 0; i < 13; i++){
        if(d[i] == 0){
            cout << "D " << i+1 << endl;
        }
    }

    return 0;
}

