#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int main(){

    int N, L;

    cin >> N >> L;

    char str[N][L], temp[N][L];

    for(int i = 0; i < N; i++){
        cin >> str[i];
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; i < N-i-1; j++){
            if(strcmp(str[i], str[j]) > 0){
                strcpy(str[j], temp[0]);
                strcpy(str[i], str[j]);
                strcpy(temp[0], str[i]);
            }
        }
    }

    for(int i = 0; i < N; i++){
        cout << str[i];
    }

}
