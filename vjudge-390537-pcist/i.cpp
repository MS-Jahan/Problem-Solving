#include <bits/stdc++.h>
using namespace std;

int main(){

    float arr, imp;

    cin >> arr >> imp;

    int i = 1;

    while(1){
        if(i / arr <= imp){
            //cout << i / arr << " | " << i << endl;
            if((i / arr - round(i / arr) > 0) && (round(i / arr)+1 == imp)){
                cout << i << endl;
                break;
            }
        }
        else{
            cout << i-1 << endl;
            break;
        }
        i++;
    }


    return 0;

}



