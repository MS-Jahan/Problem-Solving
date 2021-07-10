#include <bits/stdc++.h>
using namespace std;

int main(){

    int ts, one_exists, later_zero, later_one, counter, temp_counter;
    cin >> ts;

    string str;

    for(int i = 0; i < ts; i++){
        cin >> str;

        one_exists = 0;
        later_zero = 0;
        later_one = 0;
        counter = 0;
        temp_counter = 0;

        for(int j = 0; j < str.length(); j++){

            if(later_zero == 1 && str[j] == '1'){
                counter += temp_counter;
                temp_counter = 0;
                later_zero = 0;
            }
            else if(one_exists == 1 && str[j] == '0'){
                later_zero = 1;
                temp_counter++;
            }
            else if(str[j] == '1'){
                one_exists = 1;
            }

        }

        cout << counter << endl;
    }


}
