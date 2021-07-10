#include <bits/stdc++.h>
using namespace std;

int main(){

    int len, x = 0, sum = 0;
    string str;

    cin >> len;
    cin >> str;

    for(int i = 0; i < len; i++){
        if(str[i] == 'x'){
            x++;
        }
        else{
            x = 0;
        }

        if(x >= 3){
            sum++;
        }
    }

    cout << sum << endl;

}
