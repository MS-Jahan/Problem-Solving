#include <bits/stdc++.h>

using namespace std;

int main(){

    int N, temp, sum = 0;

    cin >> N;
    int arr[N];

    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N-i-1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }


    for(int i = 0; i < N-1; i++){
        sum += abs(arr[i] - arr[i+1]);
    }

    cout << sum << endl;

    return 0;
}

