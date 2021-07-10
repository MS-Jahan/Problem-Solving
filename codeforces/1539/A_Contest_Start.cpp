
#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define nl cout << endl;
using namespace std;
 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);
  
    ll testcase, nump, interv, dura, start, end, dissap, targetEndTime;

    cin >> testcase;

    while(testcase--){
        cin >> nump >> interv >> dura;
        ///cout << nump << interv << dura;
        dissap = 0;
        fori(nump){
            targetEndTime = end + i * interv;
            for(ll j = i+1; j < nump; j++){
                start = j * interv;
                end = dura + j;
                if(end <= targetEndTime){
                    dissap++;
                }
                else{
                    break;
                }
            }
        }
        cout << dissap << endl;
    }
 
}

