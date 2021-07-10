#include <bits/stdc++.h>

using namespace std;

int main(){

    int N, M, X, status = 0, Ncost = 0, Zcost = 0, pos;

    cin >> N >> M >> X;

    int arr[N] = {0};
    int arr1[M];

    for(int i = 0; i < M; i++){
        cin >> arr1[i];
        arr[arr1[i] - 1] = 1;
    }

//    for(int i = 0; i < N; i++){
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//    cout << "-------Ncost---------" << endl;
    for(int i = X-1; i < N; i++){
//        cout << arr[i] << endl;
        if(arr[i] == 1){
            Ncost++;
        }
    }
//    cout << "-------Zcost---------" << endl;
    for(int i = X-1; i >= 0; i--){
//        cout << arr[i] << endl;
        if(arr[i] == 1){
            Zcost++;
        }
    }

//    cout << "----------------" << endl;
//    cout << Zcost << endl;
//    cout << Ncost << endl;

    if(Zcost >= Ncost){
        cout << Ncost << endl;
    }
    else{
        cout << Zcost << endl;
    }

    return 0;
}



