#include <bits/stdc++.h>
#define fori(n) for(int i = 0; i < n; i++)
#define forj(n) for(int j = 0; j < n; j++)
using namespace std;

int main(){

    string a = "I hate", b = "I love";

    int n, flag = 1;

    cin >> n;

    fori(n){
        if(flag == 1){
            cout << a;
            flag = 2;
        }
        else{
            cout << b;
            flag = 1;
        }

        if(i == n-1){
            cout << " it" << endl;
        }
        else{
            cout << " that ";
        }

    }
    
}