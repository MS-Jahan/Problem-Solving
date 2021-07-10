#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
using namespace std;
 
int main(){
 
    ll n, a, b, c, iter, delstat, flag;
 
    cin >> n;
 
    fori(n){
        cin >> a >> b >> c;
 
        iter = 1;
        //flag = 0;
        while(a != 0 || b != 0 || c != 0){
            if(iter % 7 == 0){
                a--;
                b--;
                c--;
            }
            else{
                delstat = 0;
                if(a > 1){
                    a--;
                    delstat = 1;
                }
                else if(b > 1){
                    b--;
                    delstat = 1;
                }
                else if(c > 1){
                    c--;
                    delstat = 1;
                }
 
                if(delstat == 0){
                    break;
                }
            }
 
            iter++;
        }
 
        if(a == 0 && b == 0 && c == 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    
}

