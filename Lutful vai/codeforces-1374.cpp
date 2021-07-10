#include <bits/stdc++.h>
using namespace std;

int main(){

    long long int arr[3], x, y, n, mx;
    int ts, flag = 0;

    cin >> ts;

    for(int i = 0; i < ts; i++){
        cin >> arr[0] >> arr[1] >> arr[2];

        x = arr[0];
        y = arr[1];
        n = arr[2];


        //sort(arr, arr+3);

        mx = n+1;


        while(mx != 0){
            //cout << mx << endl;
            if(mx >= 0 && mx <= n){
                if(mx % x == y){
                    cout << mx << endl;
                    flag = 1;
                    break;
                }
            }
            mx--;
        }
    }

    if(flag == 0){
        cout << 0 << endl;
    }




}
