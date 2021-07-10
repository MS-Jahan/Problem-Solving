#include <bits/stdc++.h>

using namespace std;

int main(){

    int year, cost;

    cin >> year >> cost;

    if(year >= 13){
        cout << cost << endl;
    }
    else if(year >= 6 && year <= 12){
        cout << cost / 2 << endl;
    }
    else{
        cout << 0 << endl;
    }


    return 0;
}
