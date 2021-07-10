#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int num_of_arr, queries, col, row = 0, q1, q2;

    cin >> num_of_arr >> queries;

    int arr[][num_of_arr] = {0};

    for(int i = 0; i < num_of_arr; i++){
        cin >> col;
        for(int j = 0; j < col; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < num_of_arr; i++){
        cin >> q1 >> q2;
        cout << arr[q1][q2] << endl;
    }


    return 0;
}
