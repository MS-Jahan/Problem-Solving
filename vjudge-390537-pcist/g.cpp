#include <bits/stdc++.h>

using namespace std;

int main(){

    int h, m;

    cin >> h >> m;

    int i = 45;

    while(i != 0){
        m--;
        if(m < 0){
            m = 59;
            h -= 1;
            if(h < 0){
                h = 23;
            }
        }

        i--;
    }

    cout << h << " " << m << endl;

    return 0;
}


