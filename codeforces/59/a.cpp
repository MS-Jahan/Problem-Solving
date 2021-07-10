#include <bits/stdc++.h>
using namespace std;

int main(){

    string str;
    cin >> str;
    int len = str.length(), up = 0, down = 0;

    for(int i = 0; i < len; i++){
        if(isupper(str[i])){
            up++;
        }
        else if(islower(str[i])){
            down++;
        }
    }

    //cout << up << " " << down;

    if(up > down){
        for(int i = 0; i < len; i++){
            str[i] = toupper(str[i]);
        }
    }
    else{
        for(int i = 0; i < len; i++){
            str[i] = tolower(str[i]);
        }
    }

    cout << str << endl;
}