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
        string s;
        cin >> s;

        ll len = s.length();

        ll team_f = 0, team_s = 0;
        fori(10){
            if(s[i] == '1'){
                if((i+1) % 2 == 0){
                    team_s++;
                }
                else{
                    team_f++;
                }
            }
        }

        ll descision = 0;
        if(team_f >= team_s){
            descision = 1;
        }
        cout << descision << endl;

        team_f = 0; team_s = 0;
        ll goal_counter = 0;
        fori(10){
            goal_counter++;
            if(s[i] == '1'){
                if((i+1) % 2 == 0){
                    team_s++;
                }
                else{
                    team_f++;
                }
            }
            else if(s[i] == '?'){
                if(descision == 1){
                    team_f++;
                }
                else{
                    team_s++;
                }
            }

            ll goalDiff = abs(team_f-team_s);

            ll goalsLeft[2] = {0, 0};
            if((10-(i+1)) % 2 == 0){
                goalsLeft[0] = (10-(i+1)) / 2;
                goalsLeft[1] = goalsLeft[0];
            }
            else{
                goalsLeft[1] = (10-(i+1)) / 2;
                goalsLeft[0] = goalsLeft[0]+1;
            }

            if(team_f < team_s && goalsLeft[0] < goalDiff){
                break;
            }

            if(team_s < team_f && goalsLeft[1] < goalDiff){
                break;
            }
            
        }

        cout << goal_counter << endl;
    }
}