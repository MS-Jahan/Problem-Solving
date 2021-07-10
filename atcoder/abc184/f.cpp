#include <bits/stdc++.h> 
using namespace std; 

int main(){

    int n;
    long int t, sumt = 0;

    cin >> n >> t;

    long int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    sort(arr, arr+n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " " ;
    }

    cout << endl;

    for(int i = 0; i < n; i++){
        if(sumt + arr[i] <= t){
            sumt += arr[i];
        }
        else{
            break;
        }
        cout << endl << i << endl << endl;
    }
    
    cout << sumt << endl;
}