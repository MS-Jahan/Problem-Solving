#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;

    cin >> n;
    string str = "";
    string num;

    int start = 1;

    for(int i = 0; i < n; i++){
        num = to_string(start);
        //cout << num << endl;
        str += num;
        //cout << str << endl;
        start++;
    }

    cout << str[n-1] << endl;

}
