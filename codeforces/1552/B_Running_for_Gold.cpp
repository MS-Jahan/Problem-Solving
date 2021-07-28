#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define nl cout << endl;
using namespace std;

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    ll ts, n;
    cin >> ts;

    while(ts--){
        cin >> n;
        ll arr[n][5] = { 0 };
        ll lowest = 50000*5;
        ll lowestRowIndex = -1;

        fori(n){
            ll tempLowestSum = 0;
            forj(5){
                cin >> arr[i][j];
                tempLowestSum += arr[i][j];
                //cout << tempLowestSum << " "  << lowestRowIndex << endl;
            }
            if(tempLowestSum < lowest){
                lowest = tempLowestSum;
                lowestRowIndex = i;
            }
        }

        //cout << lowestRowIndex+1 << endl;

        ll stat = 1;
        fori(n){
            if(i == lowestRowIndex){
                continue;
            }

            ll atLeastThree = 0;

            forj(5){
                //cout << "checking: "  << arr[i][j] << " " << arr[lowestRowIndex][j] << endl;
                if(atLeastThree == 3){
                    stat = 1;
                    break;
                }
                else if(arr[i][j] < arr[lowestRowIndex][j]){
                    stat = -1;
                }
                else{
                    atLeastThree++;
                }
            }
            if(stat == -1){
                cout << -1 << endl;
                break;
            }
        }

        if(stat != -1){
            cout << lowestRowIndex+1 << endl;
        }

        // fori(n){
        //     forj(5){
        //         cout << arr[i][j] << endl;
        //     }
        // }
    }
    
}