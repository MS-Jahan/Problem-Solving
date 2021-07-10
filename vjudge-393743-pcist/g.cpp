#include <bits/stdc++.h>
using namespace std;

int main(){

    int a, b, c, co = 0;

    cin >> a >> b >> c;

    if(a+b <= c){
        co = c - (a+b) + 1;
    }
    else if(b+c <= a){
        co = a - (b+c) + 1;
    }
    else if(c+a <= b){
        co = b - (c+a) +1;
    }

    cout << co << endl;
}
