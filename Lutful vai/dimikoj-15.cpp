#include <bits/stdc++.h>
using namespace std;

int main(){

    int ts, k, num_arr_index;
    //char letters[1002];
    char c;
    //cout << "aaaaamar" << endl;
    cin >> ts;
    scanf("%*c");
    for(int i = 0; i < ts; i++){
        //char letters[1002];
        string letters;
        int nums[1002] = {0};
        num_arr_index = 0;

        getline(cin, letters);
        int len = letters.length();
        //cout << len << endl;
        sort(letters.begin(), letters.end());

        //cout << letters << endl;

        for(int j = 0; j < letters.length(); j++){
            if(letters[j] == ' '){
                ;
            }
            else if(j == 0){
                nums[j]++;

            }
            else if(j > 0){
                if(letters[j] == letters[j-1]){
                    nums[num_arr_index]++;
                }
                else{
                    num_arr_index++;
                    nums[num_arr_index]++;

                }
            }
        }

        num_arr_index = 0;

        if(letters[0] == ' '){
            num_arr_index = 1;
        }


        for(int j = 0; j < letters.length(); j++){
            if(letters[j] == ' '){
                //num_arr_index++;
            }
            else if(j == 0){
                cout << letters[j] << " = " << nums[num_arr_index] << endl;
                num_arr_index++;
            }
            else{
                if(letters[j] != letters[j-1]){
                    cout << letters[j] << " = " << nums[num_arr_index] << endl;
                    num_arr_index++;
                }

            }
        }

        cout << endl;

    }

    return 0;

}
