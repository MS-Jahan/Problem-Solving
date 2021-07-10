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
        if(s[0] == ')' || s[s.length() - 1] == '('){
            cout << "NO" << endl;
        }
        else if(s.length() % 2 != 0){
            cout << "NO" << endl;
        }
        else{
            int temp = 0, stat = 0;
            vector<char> v;
            if(s[s.length()-1] == '?'){
                s[s.length()-1] = ')';
            }

            if(s[0] == '?'){
                s[0] = '(';
            }

            forj(s.length()){
                if(s[j] == '('){
                    v.push_back('(');
                }
                else if(s[j] == ')'){
                    if(v.size() != 0){
                        v.pop_back();
                    }
                }
                else{
                    if(s[j-1] == '('){
                        s[j] = ')';
                        v.pop_back();
                    }
                    else {
                        if(s[j+1] == ')'){
                            s[j] = '(';
                            v.push_back('(');
                        }
                    }

                    if(v.size() != 0){
                        s[j] = ')';
                        v.pop_back();
                    }
                    else{
                        s[j] = '(';
                        v.push_back('(');
                    }
                }
                //cout << s << " - " << j << endl;
            }

            if(v.size() == 0){
                cout << "YES" << endl; 
            }
            else{
                cout << "NO" << endl; 
            }
            
                   
        }
        //cout << i+1 << endl;
    }   
    
}