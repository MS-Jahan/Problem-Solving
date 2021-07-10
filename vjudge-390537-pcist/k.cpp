#include <bits/stdc++.h>

using namespace std;

int main(){

    long int ts, a, b, lcm, gcd;

    cin >> ts;

    for(int i = 0; i < ts; i++){
        cin >> a >> b;

        //gcd = min(a, b);

//        while(gcd >= 1){
//            //cout << "gcd: " << gcd << endl;
//            if(a % gcd == 0 && b % gcd== 0){
//                break;
//            }
//            gcd--;
//        }

        lcm = max(a, b);

        while(1){
            //cout << "lcm: " << lcm << endl;
            if(lcm % a == 0 && lcm % b == 0){
                break;
            }
            lcm++;
        }

        gcd = __gcd(a, b);

        //lcm = (a * b) / gcd;

        cout << gcd << " " << lcm << endl;

    }

    return 0;
}



