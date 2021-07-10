#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define nl cout << endl;
using namespace std;

int main(){
//ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t, n, d, c, f;

    cin >> t;

    while(t--){
        cin >> n >> d;

        vector<int> arr(n);

        fori(n){
            cin >> arr[i];
            //cout << arr[i] << endl;
        }

        c = 0;
        f = 1;

        vector<int> sorted = arr;
        sort(sorted.begin(), sorted.end());

        fori(n){
            //cout << arr[i] << endl;
            if(arr[i] > d){
                //cout << arr[i] << endl;
                if(sorted[0] + sorted[1] <= d){
                    c++;
                }
                else{
                    f = 0;
                    break;
                }
            }
        }

        if(f == 1){
            //cout << c << endl;
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }

}
