#include <bits/stdc++.h>
//#include <string.h>

using namespace std;

int main(){

    string s, c, r, str;

    s = "Sunny";
    c = "Cloudy";
    r = "Rainy";

    cin >> str;


    if(str.compare(s) == 0){
        cout << c << endl;
    }
    else if(str.compare(c) == 0){
        cout << r << endl;
    }
    else if(str.compare(r) == 0){
        cout << s << endl;
    }

    return 0;

}



