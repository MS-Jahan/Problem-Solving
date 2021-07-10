#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, counter = 0;

    cin >> n;

    char str[n];
    scanf("%*c");

    for(int i = 0; i < n; i++){
        str[i] = getchar();
        if(i > 0 && str[i] == str[i-1]){
            counter ++;
        }
    }

    cout << counter << endl;

}
