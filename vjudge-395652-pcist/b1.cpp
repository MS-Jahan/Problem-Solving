#include <bits/stdc++.h>
using namespace std;

int main(){

    int ts, len, sum, num;
    string str;

    cin >> ts;

    for(int i = 0; i < ts; i++){
        cin >> len;
        cin >> str;

        string arr;
        int index = 0;
        sum = 0;

        for(int j = 0; j < len; j++){
            num = str[j] - '0';

            if(num % 2 != 0){
                arr[index] = str[j];
                index++;
                sum += num;
            }

            if(sum % 2 == 0 && sum > 0){
                break;
            }
        }
        arr[index] = '\0';
        if(sum == 0 || sum % 2 != 0){
            cout << -1 << endl;
        }
        else{
            for(int j = 0; j < index; j++){
                cout << arr[j];
            }
            cout << endl;
        }
    }

}
