#include <bits/stdc++.h>
using namespace std;

long int divisor(long int n){
    long int i = n / 2;
    while(n > 1 && i > 1){
        if(n % i == 0){
            return n/i;
        }
        else{
           i--; 
        }
    }

    return -1;
}

int main(){

    int ts, stepped;
    long int n, steps, prev;

    cin >> ts;

    for(int i = 0; i < ts; i++){
        cin >> n;
        steps = 0;
        
        //cout << "Inputted " << n << endl;

        while(n > 1){
            prev = n;
            //cout << "H" << endl;
            n = divisor(n);
            //cout << prev << " --> " << n << " : " << steps << endl;
            steps++;

            if(n == -1){
                n = prev - 1;
                //steps--;
            }
        }

        cout << steps << endl;
    }

}