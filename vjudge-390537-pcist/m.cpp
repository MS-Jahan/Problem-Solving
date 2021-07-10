#include <bits/stdc++.h>
using namespace std;

int main(){

    long int n, a, mini, maxi, sum = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a;
        if(i == 0){
            maxi = a;
            mini = a;
        }
        else{
            if(a > maxi){
                maxi = a;
            }
            else if(a < mini){
                mini = a;
            }
        }
        sum += a;
    }

    cout << mini << " " << maxi << " " << sum << endl;


    return 0;
}



