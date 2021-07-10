#include <bits/stdc++.h>
using namespace std;

int main(){

    int ts, counter = 0;
    cin >> ts;
    string str;

    for(int i = 0; i < ts; i++){
        cin >> str;
        int len = str.length();
        if(len <= 10){
            cout << str << endl;
        }
        else{
            cout << str[0] << len-2 << str[len-1] << endl;
        }
    }


}
