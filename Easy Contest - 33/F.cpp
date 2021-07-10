#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int main(){

    char str[13];
    int status = 1;
    cin >> str;
    //cout << strlen(str) << " " << str[strlen(str) - 2] << endl;

    if(str[0] == 'A'){
        if(strlen(str) >= 5){
            //cout << "*" << endl;
            if(str[2] == 'C' && str[strlen(str) - 2] == 'C'){
                //cout << "**" << endl;
                //cout << 1 << endl;
                status = 0;
            }
            else if(str[2] == 'C'){
                //cout << "**" << endl;
                if((int)str[1] > 96){
                    for(int i = 3; i < strlen(str); i++){
                        if((int)str[i] < 97){
                            //cout << 2 << endl;
                            status = 0;
                            break;
                        }
                    }
                }
                else{
                    //cout << 3 << endl;
                    status = 0;
                }
            }
            else if(str[strlen(str) - 2] == 'C'){
                //cout << "***" << endl;
                for(int i = 1; i < strlen(str); i++){
                    if((int)str[i] < 97 && i != (strlen(str) - 2)){
                        //cout << 4 << endl;
                        status = 0;
                        break;
                    }
                }
            }
            else{
                //cout << 11 << endl;
                status = 0;
            }


        }
        else if(strlen(str) == 4){
            if(str[2] == 'C'){
                if((int)str[1] < 96 || (int)str[3] < 96){
                    //cout << 5 << endl;
                    status = 0;

                }
            }
            else{
                //cout << 6 << endl;
                status = 0;
            }
        }
        else if(strlen(str) == 3){
            if(str[2] == 'C'){
                if((int)str[1] < 96){
                    //cout << 7 << endl;
                    status = 0;

                }
            }
            else{
                //cout << 8 << endl;
                status = 0;
            }
        }
        else{
            //cout << 9 << endl;
            status = 0;
        }
    }
    else{
        //cout << 10 << endl;
        status = 0;
    }



    if(status == 0){
        cout << "WA" << endl;
    }
    else{
        cout << "AC" << endl;
    }

    return 0;

}
