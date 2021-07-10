#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int main(){

    int tc, a, b, c;
    float s;

    cin >> tc;

    for(int i = 0; i < tc; i++){
        cin >> a >> b >> c;

        if(a > 0 && b > 0 && c > 0){
            if(a+b > c && b+c > a && a+c > b){
                s = (a + b + c) / 2.0;
                s = sqrt(s*(s-a)*(s-b)*(s-c));
                printf("%0.1f\n", s);
            }
            else{
                cout << "Illegal!" << endl;
            }
        }
        else{
            cout << "Illegal!" << endl;
        }
    }

    return 0;

}

