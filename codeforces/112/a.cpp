#include <bits/stdc++.h>
using namespace std;

int main(){

    string s1, s2;
    int s1_c = 0, s2_c = 0;
    cin >> s1 >> s2;

    int len = s1.length();

    for(int i = 0; i < len; i++){
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
        s1_c += s1[i];
        s2_c += s2[i];
    }

    if(s1 > s2){
        cout << 1 << endl;
    }
    else if(s1 < s2){
        cout << -1 << endl;
    }
    else{
        cout << 0 << endl;
    }


}
