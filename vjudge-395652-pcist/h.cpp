#include <bits/stdc++.h>
using namespace std;

int main(){

    string a, b;
    char str[103];

    cin >> a;
    cin >> b;

    int len = a.length(), flag = 1, index = 0;

    for(int i = 0; i < len; i++){
        if(a[i] == 'a' && b[i] > 'a'){
            flag = 0;
            break;
        }
        else if(b[i] == 'z' && a[i] < 'z'){
            flag = 0;
            break;
        }
        else{
            if(a[i] == b[i]){
                str[index] = a[i];
                index++;
            }
            else if(a[i] > b[i]){
                str[index] = b[i];
                index++;
            }
            else{
                //str[index] = a[i];
                //index++;
                flag = 0;
                break;
            }
        }
    }

    if(flag == 1){
        for(int i = 0; i < index; i++){
            cout << str[i];
        }
        cout << endl;
    }
    else{
        cout << -1 << endl;
    }

}
