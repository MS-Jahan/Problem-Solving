#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int main(){

    int temp, status = 1;
    char letters[100];
    int alphabets[27] = { 0 };
    cin >> letters;

    for(int i = 0; i < strlen(letters); i++){
        temp = letters[i] - 96;
        alphabets[temp-1] += 1;
    }

    for(int i = 0; i < 26; i ++){
        if(alphabets[i] % 2 != 0){
            status = 0;
            break;
        }
    }

    if(status == 0){
        cout << "No" << endl;
    }
    else{
        cout << "Yes" << endl;
    }

    return 0;

}

