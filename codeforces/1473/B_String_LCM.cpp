#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define nl cout << endl;
using namespace std;

int hmt(string s, string t){
    int lenS = s.length();
    int lenT = t.length();
    int c = 0;

    fori(lenS){
        if(s[i] == t[0]){
            forj(lenT-1){
                if(t[j+1] == s[i+j+1]){
                    if(j == lenT-2){
                        c++;
                        i += j+1;
                    }
                }
                else{
                    i += j;
                    break;
                }
            }
        }
    }

    return c;
}

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n;
    string s, t;

    while(n--){
        cin >> s >> t;

        if(s.length() % t.length() == 0){
            int occur = hmt(s, t);
            if(t.length() * occur == s.length()){
                cout << t << endl;
            }
            else{

            }
        }
        else if(t.length() % s.length() == 0){
            int occur = hmt(s, t);
            if(s.length() * occur == t.length()){
                cout << t << endl;
            }
            else{

            }
        }
        else{
            if(t.length() == 1){

            }
            else{
                cout << -1 << endl;
            }
        }
    }
    
}
