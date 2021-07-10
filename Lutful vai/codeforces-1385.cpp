#include <bits/stdc++.h>
using namespace std;

int main(){

    int ts;
    long int arr[3] = {0};

    cin >> ts;

    while(ts--){
        cin >> arr[0] >> arr[1] >> arr[2];

        sort(arr, arr+3);

        if(arr[1] != arr[2]){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
            cout << arr[0] << " " << arr[0] << " " << arr[2] << endl;
        }
    }

    return 0;

}
