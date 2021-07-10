#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, k;

    cin >> n >> k;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    if(arr[0] == 0){
        k = 0;
    }
    else{
        if(arr[k-1] != 0){
            while(arr[k-1] == arr[k]){
                k++;
            }
        }
        else{
            while(arr[k-1] == 0){
                k--;
            }
        }
    }

    cout << k << endl;

}
