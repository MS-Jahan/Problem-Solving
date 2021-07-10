#include <bits/stdc++.h> 
using namespace std; 

int main(){

    int n, x;
    string ans;

    cin >> n >> x >> ans;

    for(int i = 0; i < ans.length(); i++){
        if(ans[i] == 'x' && x > 0){
            x--;
        }
        else if(ans[i] == 'o'){
            x++;
        }
    }

    cout << x << endl;
    
}