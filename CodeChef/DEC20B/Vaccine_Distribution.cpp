#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(int i = 0; i < n; i++)
#define forj(n) for(int j = 0; j < n; j++)
using namespace std;

int main(){

    int ts, n, d, risk, risk_free, temp, sum;

    cin >> ts;

    fori(ts){
        cin >> n >> d;
        risk = 0, risk_free = 0, sum = 0;
        vector<int> v;
        forj(n){
            cin >> temp;
            v.push_back(temp);

            if(temp <= 9 || temp >= 80){
                risk++;
            }
            else{
                risk_free++;
            }
        }

        if(risk % d == 0){
            sum += risk/d;
        }
        else{
            sum += risk/d + 1;
        }

        if(risk_free % d == 0){
            sum += risk_free/d;
        }
        else{
            sum += risk_free/d + 1;
        }

        cout << sum << endl;
    }
    
}