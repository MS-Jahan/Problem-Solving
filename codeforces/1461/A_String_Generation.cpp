#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(int i = 0; i < n; i++)
#define forj(n) for(int j = 0; j < n; j++)
using namespace std;


int main(){

    int ts, n, k, c, index, len;

    string st = "abc";
    string temp;
    cin >> ts;

    fori(ts){
        cin >> n >> k;
        
        c = 0;
        index = 0;
        len = st.length();

        while(c < n){
            cout << st[index];
            c++;
            index++;

            if(index == len){
                index = 0;
            }
        }
        
        cout << endl;
    }
    
}
