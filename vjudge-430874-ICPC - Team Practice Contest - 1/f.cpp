#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define nl cout << endl;
using namespace std;
 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);

    string city_name;
    cin >> city_name;

    ll number_of_friends, pos;
    cin >> number_of_friends;
    string friend_name, temp_string;

    fori(number_of_friends){
        cin >> friend_name;
        ll friend_name_length = friend_name.length();
        ll num_of_pics = 0;
        ll temp_num_of_pics = 0;

        temp_string = friend_name;
        if(city_name.find(temp_string) == 0){
            //cout << "FULL Name Found!" << endl;
            num_of_pics++;
        }
        else{
            temp_string = "";
            forj(friend_name_length){
                temp_string += friend_name[j];

                pos = city_name.find(temp_string);
                
                cout << temp_string << " " << pos << endl;
            //----------------------------------------------
                if(pos < 0){
                    if(j < friend_name_length){
                        if(temp_string.length() > 1){
                            num_of_pics++;
                            temp_string = "";
                            temp_num_of_pics = 0;
                            j--;
                            continue;
                        }
                        else{
                            num_of_pics = -1;
                            break;
                        }
                    }
                    else{
                        //cout << -1 << endl;
                        num_of_pics = -1;
                        break;
                    } 
                    //---------------------------------
                }
                else{
                    temp_num_of_pics++;
                }
            }
        }

        if(num_of_pics != -1){
            num_of_pics += temp_num_of_pics;
        }

        cout << num_of_pics << endl;
    }
}