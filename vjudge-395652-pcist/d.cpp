#include <bits/stdc++.h>
using namespace std;

int main(){

    int len, counter = 0;
    string str;

    cin >> len;
    cin >> str;

    for(int i = 1; i < len; i+=2){
        if(str[i] == str[i-1]){
            if(str[i] == 'a'){
                str[i] = 'b';
                counter++;
            }
            else{
                str[i] = 'a';
                counter++;
            }
        }
    }

    cout << counter << endl;
    cout << str << endl;

}
