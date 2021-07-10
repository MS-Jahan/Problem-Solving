#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, d;
    cin >> n >> d;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int len = sizeof(arr) / sizeof(arr[0]);

    int c = 0;
    int i = 0;

    if(d <= len - 1){
        i = d;
    }
    else if(d > len - 1){
        i = d % len;
    }

    while(c < len){
        if(i == len){
            i = 0;
        }
        cout << arr[i];

        if(c == len){
            cout << endl;
        }
        else{
            cout << " ";
        }
        i++;
        c++;
    }

}
