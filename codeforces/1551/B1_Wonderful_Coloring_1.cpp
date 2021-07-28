#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define nl cout << endl;
using namespace std;
        
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);

    ll ts;
    cin >> ts;

    while(ts--){
        string s, red = "", green = "";

        cin >> s;

        ll len = s.length();
        ll tempLen = len / 2;

        ll i = -1;
        while(tempLen--){
            i++;
            //cout << s[i] << endl;
            if(i < len){
                if(red.find(s[i]) != -1){
                    tempLen++;
                }
                else{
                    red += s[i];
                }
            }
        }

        i = -1;
        tempLen = len / 2;
        while(tempLen--){
            i++;
            if(i < len){
                if(green.find(s[i]) != -1){
                    tempLen++;
                }
                else{
                    green += s[i];
                }
            }
        }
        int res;
        if(red.length() == green.length()){
            res = red.length();
        }
        else{
            res = min(red.length(), green.length());
        }

        cout << res << endl;
    }
}