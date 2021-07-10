#include <bits/stdc++.h>
using namespace std;

int main(){

    int ts, n, flag;
    char c;

    cin >> ts;

    for(int i = 0; i < ts; i++){
        cin >> n;
        scanf("%*c");
        int arr[26] = {0};
        flag = 1;
        for(int j = 0; j < n; j++){
            while((c = getchar()) != '\n'){
                arr[c - 97] += 1;
            }
        }

        for(int j = 0; j < 26; j++){
            //cout << arr[j] << " ";
        }

        //cout << endl;

        for(int j = 0; j < 26; j++){
            if(arr[j] != 0){
                //cout << arr[j] << "%" << n <<" = " << arr[j] % n << endl;
                if(arr[j] % n != 0){
                    flag = 0;
                    break;
                }
            }
        }

        if(flag == 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }

}
