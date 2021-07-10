#include <bits/stdc++.h>
using namespace std;

int main(){

    string str, rts;
    cin >> str >> rts;
    int flag = 1, len = str.length();

    for(int i = 0; i < len; i++){
        if(str[i] != rts[len - (i+1)]){
            flag = 0;
            break;
        }
    }

    if(flag == 1){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

}