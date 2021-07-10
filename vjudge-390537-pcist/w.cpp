#include <bits/stdc++.h>
using namespace std;

int main(){

    int arr[3] = {0}, temp;

    cin >> arr[0] >> arr[1] >> arr[2];
    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr, arr+n);


    printf("%d %d %d\n", arr[0], arr[1], arr[2]);

    return 0;

}


