#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, counter = 0;

    cin >> n;

    int h[n], a[n];

    for(int i = 0; i < n; i++){
        cin >> h[i] >> a[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i != j && h[i] == a[j]){
                counter++;
            }
        }
    }

    cout << counter << endl;

}
