#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, num, sum = 0, counter = 0;

    cin >> n;

    if(n == 1){
        cout << 1 << endl << 1 << endl;
        return 0;
    }

    int i = n/2;

    while(i != 0){
        if(n % i == 0){
            //num = i;
            if(1 <= i && i <= 9){
                cout << n/i << endl;
                for(int j = 0; j < n/i; j++){

                    cout << i;
                    if(j == (n/i)-1){
                        cout << endl;
                    }
                    else{
                        cout << " ";
                    }

                }
                break;
            }
        }
        i--;
    }



}
