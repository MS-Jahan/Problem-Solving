#include <bits/stdc++.h>
using namespace std;

int contains(string v, char c){

    for(int i = 0; i < 6; i++){
        if(c == v[i]){
            return 1;
        }
    }
    return 2;

}

int main(){

    string v = "aeiouy";
    string str;

    string lst = "l";

    cin >> str;

    int len = str.length();

    for(int i = 0; i < len; i++){
        if(contains(v, tolower(str[i])) == 1){
            ;
        }
        else{
            str[i] = tolower(str[i]);
            cout << "." << str[i];
            lst = str[i];
        }

    }
    cout << endl;
}
