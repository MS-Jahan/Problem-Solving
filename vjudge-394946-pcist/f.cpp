#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, flag = 1;

    cin >> n;

    string str = to_string(n);
    //cout << t << endl;

    int len = str.length();

    for(int i = 0; i < len; i++){
        //cout << "chk ";
        //cout << str[i];
        if(str[i] != '4' && str[i] != '7'){
            flag = 0;
            break;
        }
    }

    if(flag == 0){
        if(n % 4 == 0 || n % 7 == 0){
            flag = 1;
        }
        else{
            flag = 0;
        }
    }

    if(flag == 0){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }

}
