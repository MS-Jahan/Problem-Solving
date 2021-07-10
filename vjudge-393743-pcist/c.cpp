#include <bits/stdc++.h>
using namespace std;

int main(){

    string str;

    getline(cin, str);

    string v = "aeiouy";

    int len = str.length(), flag = 0;

    for(int i = len - 1; i >= 0; i--){
        if(isalpha(str[i])){
            for(int j = 0; j < 6; j++){
                //cout << str[i] << " | " << v[j] << endl;
                if(tolower(str[i]) == v[j]){
                    flag = 1;
                    break;
                }
            }
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
