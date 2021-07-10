#include <bits/stdc++.h>
using namespace std;

int contains(string str, string arr[103], int len){

    for(int i = 0; i < len; i++){
        if(arr[i] == str){
            return 1;
        }
    }

    return 2;
}

int main(){

    int ts, flag = 0, index = 0;

    string str[103];
    string arr[103];

    cin >> ts;

    for(int i = 0; i < ts; i++){
        cin >> str[i];

        if(contains(str[i], arr, index) == 2){
            arr[index] = str[i];
            index++;
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }



}
