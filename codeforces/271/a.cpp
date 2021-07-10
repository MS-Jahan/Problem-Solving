#include <bits/stdc++.h>
using namespace std;

int check(string y){
    sort(y.begin(), y.end());
    for(int i = 1; i < 4; i++){
        if(y[i-1] == y[i]){
            return 2;
        }
    }
    return 1;
}

int main(){

    int year, next;
    cin >> year;

    year++;

    while(check(to_string(year)) != 1){
        year++;
    }

    cout << year << endl;
}