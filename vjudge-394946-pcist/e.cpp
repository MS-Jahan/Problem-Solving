#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, sum = 0;

    cin >> n;
    string str;

    for(int i = 0; i < n; i++){
        cin >> str;

        if(str[0] == '+' || str[2] == '+'){
            sum++;
        }
        else{
            sum--;
        }
    }

    cout << sum << endl;

}
