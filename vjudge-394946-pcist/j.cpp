#include <bits/stdc++.h>
using namespace std;

int main(){

    int ts, n, counter, cng_nd_flag;

    cin >> ts;

    for(int i = 0; i < ts; i++){
        cin >> n;
        int arr[n];
        counter = 0;
        cng_nd_flag = 0;

        for(int j = 0; j < n; j++){
            cin >> arr[j];
        }

        for(int j = 0; j < n; j++){
            if(j % 2 != arr[j] % 2){
                //cout << "Change needed" << endl;

                cng_nd_flag = 0;

                if(j+1 != n){
                    for(int k = j+1; k < n; k++){
                        if(arr[j] % 2 != arr[k] % 2 && j % 2 != k % 2){
                            swap(arr[j], arr[k]);
                            counter++;
                            break;
                        }

                        if(k == n-1){
                            cng_nd_flag = 1;
                            //cout << "aaa" << endl;
                        }
                    }
                }
                else{
                    counter = -1;
                }
            }
        }

        if(cng_nd_flag == 0){
            cout << counter << endl;
        }
        else{
            cout << -1 << endl;
        }

    }

}
