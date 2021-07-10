#include <bits/stdc++.h>
#define fori(n) for(int i = 0; i < n; i++)
#define forj(n) for(int j = 0; j < n; j++)
using namespace std;

int main(){

    int d1, v1, d2, v2, p, sum = 0;

    cin >> d1 >> v1 >> d2 >> v2 >> p;

    int i = 0;

    while(sum < p){

        i++;

        if(i >= d1){
            sum += v1;
        }

        if(i >= d2){
            sum += v2;
        }

    }
    
    cout << i << endl;
}