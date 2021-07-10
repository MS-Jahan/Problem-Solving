#include <bits/stdc++.h>
using namespace std;

int main(){

    string word, text;
    int counter = 0;

    cin >> word;

    for(int i = 0; i < word.length(); i++){
        if(isalpha(word[i])){
            word[i] = tolower(word[i]);
        }
    }

    while(1){
        cin >> text;
        //cout << text << endl;

        if(text == "END_OF_TEXT"){
            cout << counter << endl;
            break;
        }

        for(int i = 0; i < text.length(); i++){
            if(isalpha(text[i])){
                text[i] = tolower(text[i]);
            }
        }


        if(word == text){
            counter++;
        }


    }

    return 0;

}





