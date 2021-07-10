#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define nl cout << endl;
using namespace std;


int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n;
    string s;

    cin >> n;

    fori(n){
        cin >> s;
        if(s.length() % 2 != 0){
            cout << "NO" << endl;
        }
        else if(s[0] == ')' || s[s.length()-1] == '('){
            cout << "NO" << endl;
        }
        else{
            int l = 0, r = 0;
            forj(s.length()){
                if(s[j] == '('){
                    l++;
                }
                else if(s[j] == ')'){
                    r++;
                }

            }
            if(l == r){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
                   
        }
        //cout << i+1 << endl;
    }   
    
}