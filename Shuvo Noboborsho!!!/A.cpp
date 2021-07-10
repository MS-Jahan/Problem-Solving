#include <iostream>

using namespace std;

int main(){

    int tc, num1, num2, i, counter = 1;

    cin >> tc;

    for(i = 0; i < tc; i++){
        cin >> num1 >> num2;
        cout << "Case " << counter << ": " << num1+num2 << endl;
        counter++;
    }

    return 0;

}
