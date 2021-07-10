#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, a, b, prev = 0, now;
    cin >> n;

    int arr[n], arrin = 0;

    for(int i = 0; i < n; i++){
        cin >> a >> b;
        
        now = prev - a + b;
        arr[arrin] = now;
        arrin++;
        prev = now;
    }

    // for(int i = 0; i < n; i++){
    //     cout << arr[i] << endl;
    // }
    
    sort(arr, arr+arrin);   

    cout << arr[n-1] << endl;

}