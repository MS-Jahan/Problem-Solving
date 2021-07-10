#include <bits/stdc++.h>
using namespace std;

int main(){

    int ts, len, sum, tempS;
    string str;

    cin >> ts;

    for(int i = 0; i < ts; i++){
        cin >> len;

        cin >> str;
        sum = 0;

        //cout << "last element: " << str[len-1] << endl;
        while(str[len-1] == '0' || str[len-1] == '2' || str[len-1] == '4' || str[len-1] == '6' || str[len-1] == '8'){
            len--;
            //cout << "len: " << len << endl;
            if(len == 0){
                break;
            }
        }

        for(int j = 0; j < len; j++){
            sum += str[j] - '0';
        }

        tempS = sum;
        //cout << "sum: " << sum << " | last element: " << str[len-1] << endl;

        if(len > 1){
            if(sum % 2 != 0){
                int k = -1;
                int iii = str[len - 1] - '0';
                while(tempS % 2 != 0 && iii % 2 == 0){
                    k++;
                    tempS = sum;
                    tempS = sum - (str[len-(1+k)] - '0');
                    iii = str[len - 1] - '0';
                    //cout << sum << " " << tempS << " " << str[len-1+k] << endl;

                    //if()
                }

                //cout << k << endl;

                for(int l = 0; l < len; l++){
                    if(l != len-1+k){
                        cout << str[l];
                    }
                }
                cout << endl;
            }
            else{
                for(int l = 0; l < len; l++){
                    cout << str[l];
                }
                cout << endl;
            }
        }
        else{
            cout << -1 << endl;
        }


    }


}
