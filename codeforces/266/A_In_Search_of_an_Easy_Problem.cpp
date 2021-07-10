#include <bits/stdc++.h>
#define fori(n) for(int i = 0; i < n; i++)
#define forj(n) for(int j = 0; j < n; j++)
using namespace std;

int main(){

    int n, temp;
    string a = "EASY";

    cin >> n;

    fori(n){
        cin >> temp;

        if(temp == 1){
            a = "HARD";
        }
    }

    cout << a << endl;
}