#include <bits/stdc++.h>
using namespace std;

int main(){

    int ts, n, sum;

    cin >> ts;

    for(int i = 0; i < ts; i++){
        cin >> n;
        int arr[n];
        for(int j = 0; j < n; j++){
            cin >> arr[j];
        }

        sort(arr, arr + n);

        sum = 0;

        // cout << "\nAfter sorting: ";

        // for(int j = 0; j < n; j++){
        //     cout << arr[j] << ' ';
        // }
        
        // cout << endl << endl;

        for(int j = 0; j < n; j++){
            //cout << "index: " << j << " item: " << arr[j] << endl;
            if(arr[j] + sum == 0){
                //cout << "sum got zero: " << arr[j] << " " << arr[j+1] << " index: " << j << " " << j+1 << endl;
                //if(j < n-1){
                    int l = 1, index = 1, tests = 0;
                    int flag = 0;
                    while(tests < n-1){
                        
                        if(l == n-1){
                            l = 1;
                        }
                        
                        cout << "swapping: " << arr[j] << " " << arr[j+1] << " index: " << j << " " << j+1 << endl;
                        swap(arr[j], arr[j+l]);
                        cout << endl << "sum after swapping: " << arr[j] << " + " << sum << " = " << arr[j]+sum << endl; 
                        if(arr[j] + sum != 0){
                            sum += arr[j];
                            flag = 1;
                            break;
                        }
                        else{
                            swap(arr[j], arr[j+l]);
                        }
                        //temp++;
                        l++;
                        tests++;

                        
                    }

                    if(flag == 0){
                        cout << "NO" << endl;
                        break;
                    }
                //}
                // else{
                //     cout << "NO" << endl;
                //     break;
                // }
            }
            else{
                sum += arr[j];
            }

            if(j == n-1){
                cout << "YES" << endl;
                for(int k = 0; k < n; k++){
                    cout << arr[k];

                    if(k == n-1){
                        cout << endl;
                    }
                    else{
                        cout << " ";
                    }
                }
            }
        }
    }

}