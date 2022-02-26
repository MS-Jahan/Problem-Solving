#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define nl cout << endl;
using namespace std;
        
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    string num;

    cin >> num;

    int last_digit = num[num.size() - 1] - '0';
    int integer = stoi(num);

    if(last_digit >= 0 && last_digit <= 2){
        cout << integer << "-" << endl;
    }
    else if(last_digit >= 3 && last_digit <= 6){
        cout << integer << endl;
    }
    else if(last_digit >= 7 && last_digit <= 9){
        cout << integer << "+" << endl;
    }
}