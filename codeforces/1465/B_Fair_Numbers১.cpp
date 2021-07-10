#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define print(str) cout << str
#define nl cout << endl;
using namespace std;

ll VectorToInt(vector<int> v)
{
    reverse(v.begin(), v.end());
    ll decimal = 1;
    ll total = 0;
    for (auto& it : v)
    {
        total += it * decimal;
        decimal *= 10;
    }
    return total;
}

ll res(vector<int> v, ll num){
    
}

int main(){
ios_base::sync_with_stdio(false);

    ll ts, num;
    int temp, flag, sum;

    string n;

    cin >> ts;

    fori(ts){
        cin >> n;
        vector<int> v;
        flag = 1;
        for(auto u:n){
            temp = u - '0';

            v.push_back(temp);
        }

        num = VectorToInt(v);

        ll len = v.size();

        sum = 0;

        for(ll i = 0; i < len; i++){
            sum += v[i];
        }
        
        for(auto u:v){
            flag = 1;
            if(u == 1 || u == 0){
                ;
            }
            else if(u == 2){
                if(v[len-1] == 0 || v[len-1] == 2 || v[len-1] == 4 || v[len-1] == 6 || v[len-1] == 8){
                    ;
                }
                else{
                    flag = 0;
                    i = 1;
                    while(1){
                        if(v[len-i] != 9){
                            v[len-i]++;
                            break;
                        }
                        else{
                            v[len-i] = 0;
                            i++;
                        }
                    }
                }
            }
            else if(u == 3){

                if(sum % 3 != 0){
                    flag = 0;
                    temp = sum % 3;
                    i = 1;
                    j = 3;
                    while(j--){
                        if(v[len-i] + j > 9){
                            v[len-i]++;
                        }
                        else if(v[len-1] == 0){
                            i++;
                            v[len-i]++;
                        }
                    }
                    
                }
            }
            else if(u == 4){
                temp = v[len-1];
                temp += (v[len-2] * 10);

                if(temp % 4 != 0){
                    flag = 0;
                    
                }
            }
            else if(u == 5){
                if(v[len-1] != 0 || v[len-1] != 5){
                    flag = 0;
                    
                }
            }
            else if(u == 6){
                if(sum % 3 != 0 || sum % 2 != 0){
                    flag = 0;
                    
                }
            }
            else if(u == 7){
                temp = v[len-1] * 2;
                temp = num - temp;
                if(temp % 7 != 0){
                    flag = 0;
                    
                }
            }
            else if(u == 8){
                temp = v[len - 1] + v[len - 2] * 10 + v[len - 3] * 100;

                if(temp % 8 != 0){
                    flag = 0;
                    
                }
            }
            else if(u == 9){
                if(sum % 9 != 0){
                    flag = 0;
                    
                }
            }
            if(flag == 1){
                for(auto w:v){
                    cout << w;
                }
                nl;
                break
            }
        }

        if(flag == 0){}
    }   
    
}