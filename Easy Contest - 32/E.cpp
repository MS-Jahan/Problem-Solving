#include <bits/stdc++.h>

using namespace std;

int main(){

    int N, x = 0, i, maximum;
    string str;

    cin >> N;
    cin >> str;

    maximum = x;

    for(i = 0; i < N; i++){
        if(str[i] == 'I'){
            x++;
            if(x > maximum){
                maximum = x;
            }
        }
        else if(str[i] == 'D'){
            x--;
        }
    }

    cout << maximum << endl;

    return 0;
}
