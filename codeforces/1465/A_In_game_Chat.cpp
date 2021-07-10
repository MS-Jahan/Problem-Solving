#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define print(str) cout << str
#define nl cout << endl;
using namespace std;

int main(){
ios_base::sync_with_stdio(false);

    int ts, n, cnt;
    string str;

    cin >> ts;
    
    fori(ts){
        cnt = 0;
        cin >> n >> str;

        for(int i = n-1; i >= 0; i--){
            if(str[i] == ')'){
                cnt++;
            }
            else{
                break;
            }
        }

        int leftChars = n - cnt;

        if(cnt > leftChars){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }

    }
   
    
}