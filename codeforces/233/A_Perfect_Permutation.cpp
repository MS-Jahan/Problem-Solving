#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define print(str) cout << str
#define nl cout << endl;
using namespace std;

int main(){
    
    int n, flag;

    cin >> n;

    if(n <= 1){
        cout << -1 << endl;
    }
    else{
        
        int arr[n];

        fori(n){
            arr[i] = i + 1;
        }

        fori(n){
            if(i+1 < n){
                swap(arr[i], arr[i+1]);
            }
            else{
                if(n > 2)
                    swap(arr[i], arr[i-1]);
            }
            i++;
        }
        
        flag = 0;

        fori(n){
            if(arr[arr[i]-1] == i+1){
                ;
            }
            else{
                flag = 1;
                break;
            }
        }

        if(flag == 1){
            cout << -1 << endl;
        }
        else{
            fori(n){
            cout << arr[i];

            if(i == n-1){
                nl;
            }
            else{
                cout << " ";
            }
        }
        }

    }
    
}