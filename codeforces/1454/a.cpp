#include <bits/stdc++.h>
using namespace std;

int main(){

    int ts, n, flag;

    cin >> ts;

    for(int i = 0; i < ts; i++){
        cin >> n;
        flag = 0;
        int arr[n] = {0};

        for(int j = n; j > 0; j--){
            arr[j-1] = j;
            //cout << arr[j-1] << endl;
        }

        for(int j = 0; j < n; j--){
            if(arr[j] != n-j+1){
                cout << arr[j];
            }
            else{
                swap(arr[j], arr[j+1]);
                cout << arr[j];
            }

            if(j > 1){
                cout << " ";
            }
            else{
                cout << endl;
            }
        }
    }
}