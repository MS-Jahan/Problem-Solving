#include <bits/stdc++.h>
using namespace std;

int main(){

    int ts, flag;
    string a, b, c;
    cin >> ts;

    for(int i = 0; i < ts; i++){
        cin >> a >> b >> c;

        flag = 1;

        for(int j = 0; j < a.length(); j++){
            if(a[j] != c[j] && b[j] != c[j]){
                flag = 0;
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

}
