#include <bits/stdc++.h>
#define fori(n) for(int i = 0; i < n; i++)
using namespace std;

int main(){

    int n;

    cin >> n;
    int arr[n], pos[n];

    for(int i = 0; i < n; i++){
        cin >> arr[n];
        pos[arr[n]-1] = i+1;
    }

    fori(n){
        cout << pos[i];

        if(i == n-1){
            cout << endl;
        }
        else{
            cout << " ";
        }
    }
}