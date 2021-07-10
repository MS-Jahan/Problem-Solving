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
        getline(cin, text);

        for(int i = 0; i < text.length(); i++){
            if(isalpha(text[i])){
                text[i] = tolower(text[i]);
            }
        }

        if(text.find("end_of_text") <= text.length()){
            cout << counter << endl;
            break;
        }

        for(int i = 0; i < text.length(); i++){
            if(i + word.length() - 1 < text.length()){
                //cout << text.substr(i, word.length()) << endl;
                if(word == text.substr(i, word.length())){
                    counter++;
                }
            }
        }



    }

    return 0;

}




