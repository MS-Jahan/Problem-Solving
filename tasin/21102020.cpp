#include <bits/stdc++.h>
using namespace std;

int main(){

    int ts, len;
    string str;
    cin >> ts;

    for(int i = 0; i < ts; i++){
        cin >> str;
        len = str.length();
        //cout << "Checking " << str << endl;
        cout << str[0];

        for(int j = 1; j < len; j++){
                //cout << "-- " << str[j] << " --> " << str[j+1] << endl;
            if(j < len-1){
                if(str[j] == str[j+1]){
                    cout << str[j];
                    //cout << endl;
                    j++;
                }
                else{
                    cout << str[j];
                }
            }
            else{
                cout << str[j];
            }
        }

        cout << endl;
    }


}
