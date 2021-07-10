#include <bits/stdc++.h>

using namespace std;

int main(){

    string num;
    int count = 0;

    cin >> num;

    for(int i = 0; i < num.length(); i++){
        if(num[i] == '4' || num[i] == '7'){
            count ++;
        }
    }

    string s = to_string(count);
    //cout << s << endl;
    int flag = 1;
    

    for(int i = 0; i < s.length(); i++){
        if(s[i] == '4' || s[i] == '7'){
        }
        else{
            flag = 0;
            break;
        }
    }

    //cout << flag << endl;

    if(flag == 1){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }


}