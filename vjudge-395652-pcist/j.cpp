#include <bits/stdc++.h>
using namespace std;

int isP(string str, int start){

    int len = str.length();

    for(int i = start; i < len; i++){
        //cout << str[i] << " " << str[len-1] << endl;
        if(str[i] != str[len-1]){
            return 2;
        }
        len--;
    }

    return 1;
}

int main(){

    string str;
    cin >> str;

    int res, i;

    if(isP(str, 0) == 2){
        res = str.length();
    }
    else{
        i = 0;
        while(isP(str, i) == 1){
            i++;
            if(i == str.length()){
                break;
            }
        }

        res = str.length() - i;
    }



    cout << res << endl;

}

