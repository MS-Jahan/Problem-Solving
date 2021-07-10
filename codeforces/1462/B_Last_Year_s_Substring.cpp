#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define debug(str) cout << str
#define nl() cout << endl
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("/home/sjs/stl_input_output_files/input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("/home/sjs/stl_input_output_files/output.txt", "w", stdout);
#endif


//----------------- Start Here -----------------//

    int ts, n, e, flag;

    char temp;
    vector<char> v;
    string s;
    debug("hi");
    
    cin >> ts;

    fori(ts){
        cin >> n;
        v.clear();
        forj(n){
            scanf("%c", &temp);
            v.push_back(temp);
        }

        string s(v.begin(), v.end());

        if(s == "2020"){
            cout << "YES" << endl;
        }
        else{
            vector<char> w;
            w = v;
            
            flag = 0;
            e = 2;
            while(v.begin()+1 != v.end()-e){

                w.erase(v.begin()+1, v.end()-e);
                string s(w.begin(), w.end());
                cout << s << endl;

            }
        }
        
    }
}