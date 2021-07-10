#include <bits/stdc++.h>
using namespace std;

int main(){

    int arr[100];
    int i = 0;
    char c;

    while((c = getchar()) != '\n'){
        if(c != '+'){
            arr[i] = c - '0';
            i++;
        }
    }

    sort(arr, arr+i);

    for(int j = 0; j < i; j++){
        cout << arr[j];

        if(j == i-1){
            cout << endl;
        }
        else{
            cout << "+";
        }
    }
}
