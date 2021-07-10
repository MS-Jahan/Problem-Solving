#include <bits/stdc++.h>
using namespace std;

int main(){

    int h, w;

    char d = '.';
    string first_char = "#";

    while(1){
        cin >> h >> w;
        if(h != 0 && w != 0){
            for(int i = 0; i < h; i++){
                for(int j = 0; j < w; j++){
                    if(j == 0){
                        cout << first_char;
                        if(first_char == "#"){
                            first_char = ".";
                            d = '#';
                        }
                        else{
                            first_char = "#";
                            d = '.';
                        }
                    }
                    else if(d == '.'){
                        cout << "#";
                        d = '#';
                    }
                    else{
                        cout << ".";
                        d = '.';
                    }
                }
                cout << endl;

            }
            cout << endl;
            d = '.';
            first_char = "#";
        }
        else{
            break;
        }
    }

    return 0;

}
