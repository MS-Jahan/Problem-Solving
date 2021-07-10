#include <bits/stdc++.h>

using namespace std;

int main(){

    int i, j , k, l, range, sum, arr_len = 0, t1, t2, t3;
    long long int arr[1000] = {0}, flag = 0;

    while(1){
        cin >> range >> sum;

        if(range == 0 && sum == 0){
            break;
        }

        for(i = 1; i <= range; i++){
            for(j = 1; j <= range; j++){
                for(k = 1; k <= range; k++){
                    //cout << i << " " << j << " " << k << " " << endl;
                    if(i != j && i != k && j != k){
                        if(i + j + k == sum){
                            //cout << "\n=============================\n" << endl;
                            //cout << i << " " << j << " " << k << " " << endl;
                            if(arr_len != 0){
                                //cout << "arr_len is " << arr_len << endl;
                                for(l = 0; l < arr_len; l++){
                                    t1 = arr[l] % 10;
                                    t2 = (arr[l] / 10) % 10;
                                    t3 = ((arr[l] / 10) / 10) % 10;
                                    //cout << "arr element: " << t1 << t2 << t3 << endl;

                                    if(i == t1 || i == t2 || i == t3){
                                        if(j == t1 || j == t2 || j == t3){
                                            if(k == t1 || k == t2 || k == t3){
                                                flag = 0;
                                                break;
                                            }
                                            else{
                                                flag++;

                                            }
                                        }
                                        else{
                                            flag++;

                                        }

                                    }
                                    else{
                                        flag++;

                                    }

                                }

                            }
                            else{
                                //cout << "arr_len is " << arr_len << endl;
                                flag++;
                            }


                            if(flag > 0){
                                arr[arr_len] = i * 100 + j * 10 + k;
                                //cout << "new item added: " << arr[arr_len] << endl;
                                arr_len++;
                                //cout << "Now arr_len is " << arr_len << endl;
                                flag = 0;
                            }
                            else{
                                //cout << "Item not added" << endl;
                            }
                        }
                    }
                }
            }
        }

        //cout << counter << endl;
        cout << arr_len << endl;
        arr_len = 0;
        long long int arr[1000] = {0};
    }
}
