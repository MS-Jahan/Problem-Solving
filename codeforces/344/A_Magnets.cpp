#include <bits/stdc++.h>
#define fori(n) for(int i = 0; i < n; i++)
#define forj(n) for(int j = 0; j < n; j++)
using namespace std;

int main(){
  
    int n, counter = 0;
    string num, prev = "0";

    cin >> n;

    fori(n){
        cin >> num;

        if(num != prev){
            counter++;
        }

        prev = num;
    }

    cout << counter << endl;

}