#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define print(str) cout << str
#define nl cout << endl;
using namespace std;

int main(){

    int d, sum = 0, temp, flag;
    vector<int> arr(4);

    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> d;

    sort(arr.begin(), arr.end());

    fori(arr.size()){
        for(int j = i+1; j < arr.size(); j++){
            if(arr[j] % arr[i] == 0){
                arr.erase(arr.begin()+j);
                j--;
            }
        }
    }

    // fori(arr.size()){
    //     cout << arr[i] << " ";
    // }

    // nl;

    vector<int> arr2;

    fori(d){
        flag = 0;
        forj(arr.size()){
            temp = i+1;
            if(temp % arr[j] == 0){
                flag = 1;
                break;
            }
        }
        if(flag == 1){
            arr2.push_back(temp);
            //cout << temp << endl;
        }
    }

    cout << arr2.size() << endl;
}