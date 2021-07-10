#include <bits/stdc++.h>
using namespace std;

int main(){

    int arr[105];
    char c;
    int i = 0;


    while((c = getchar()) != '\n'){
        if(c != '+'){
            arr[i] = c - '0';
            //cout << arr[i] << endl;
            i++;
        }

    }

    sort(arr, arr + i);

    for(int j = 0; j < i; j++){
        cout << arr[j];
        if(j < i-1){
            cout << '+';
        }
        else{
            cout << endl;
        }
    }

    return 0;
}
