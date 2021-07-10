#include <bits/stdc++.h>
using namespace std;

int charExists(char arr[], char c, int letter_arr_size){
    //cout << "letters array length: " << strlen(arr) << endl;
    for(int i = 0; i < letter_arr_size; i++){
        if(arr[i] == c){
            return i;
            //break;
        }
    }
    return -1;

}



int main(){

    int ts, s, letter_arr_size, flag;
    //char letters[30];
    //int nums[30];
    char c;
    cin >> ts;

    for(int i = 0; i < ts; i++){
        cin >> s;
        //char str[s][1002];
        char letters[30];
        int nums[30] = {0};
        flag = 1;
        letter_arr_size = 0;
        scanf("%*c");

        for(int j = 0; j < s; j++){
            int k = 0;
            while((c = getchar()) != '\n'){
                //str[j][k] = c;
                //cout << "char exists: " << charExists(letters, c, letter_arr_size) << endl;
                if(charExists(letters, c, letter_arr_size) >= 0){
                    nums[charExists(letters, c, letter_arr_size)] += 1;
                }
                else{
                    //cout << "char added: " << c << endl;
                    letters[letter_arr_size] = c;
                    nums[letter_arr_size] += 1;
                    letter_arr_size++;
                }
                k++;
            }
        }


        for(int l = 0; l < letter_arr_size; l++){
                if(nums[l] == 0){
                    ;
                }
                if(nums[l] % (letter_arr_size-1) != 0){
                    flag = 0;
                    break;
                }
        }




//        cout << "Nums arr: " << endl;
//        for(int l = 0; l < letter_arr_size; l++){
//            cout << nums[l] << endl;
//        }
//        cout << "Letters arr: " << endl;
//        for(int l = 0; l < letter_arr_size; l++){
//            cout << letters[l] << endl;
//        }

        if(flag == 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }

    return 0;
}
