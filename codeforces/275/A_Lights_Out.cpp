#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define print(str) cout << str
#define nl cout << endl;
using namespace std;

int toggle(int a){
    if(a == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){

    int arr1[3][3];
    int arr2[3][3];

    fori(3){
        forj(3){
            cin >> arr1[i][j];
            arr2[i][j] = 1;
        }
    }

    fori(3){
        forj(3){
            if(arr1[i][j] == 0){
                //arr2[i][j] = 0;
            }
            else if(arr1[i][j] == 1 || arr1[i][j] % 2 != 0){
                arr2[i][j] = toggle(arr2[i][j]);
                if(i-1 >= 0)
                    arr2[i-1][j] = toggle(arr2[i-1][j]);
                if(i+1 < 3)
                    arr2[i+1][j] = toggle(arr2[i+1][j]);
                if(j-1 >= 0)
                    arr2[i][j-1] = toggle(arr2[i][j-1]);
                if(j+1 < 3)
                    arr2[i][j+1] = toggle(arr2[i][j+1]);
            }
        }
    }

    fori(3){
        forj(3){
            cout << arr2[i][j];
        }
        nl;
    }
    
}