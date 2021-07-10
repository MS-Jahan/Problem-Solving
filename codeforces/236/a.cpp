#include <bits/stdc++.h>
using namespace std;

int contains(char arr[], char c, int len){

    for(int i = 0; i < len; i++){
        if(arr[i] == c){
            return 1;
        }
    }

    return 2;
}

int main(){

    string str;
    char arr[105];

    cin >> str;

    int len = str.length();
    int arlen = 0;

    for(int i = 0; i < len; i++){
        if(contains(arr, str[i], arlen) == 2){
            arr[arlen] = str[i];
            //cout << str[i] << endl;
            arlen++;
        }
    }

//    for(int i = 0; i < arlen; i++){
//        cout << arr[i] << endl;
//    }

    //cout << arlen << endl;

    if(arlen % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    }
    else{
        cout << "IGNORE HIM!" << endl;
    }

}
