#include <bits/stdc++.h>
using namespace std;

int main(){

    int ts, n, m, c, flag = 0;

    cin >> ts;

    for(int i = 0; i < ts; i++){
        cin >> n >> m;
        int a1[n], a2[m];
        flag = 0;
        c = 0;

        for(int j = 0; j < n; j++){
            cin >> a1[j];
        }
//        for(int j = 0; j < n; j++){
//            cout << a1[j] << " " ;
//        }
//        cout << endl;
        for(int j = 0; j < m; j++){
            cin >> a2[j];
        }

//        for(int j = 0; j < n; j++){
//            cout << a2[j] << " " ;
//        }
//        cout << endl;

        //sort(a1, a1+n);
        //sort(a2, a2+m);




        for(int j = 0; j < n; j++){
            for(int k = 0; k < m; k++){
                if(a1[j] == a2[k]){
                    c = a2[k];
                    flag = 1;
                    break;
                }
            }

            if(flag == 1){
                break;
            }
        }



        if(c == 0){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
            cout << "1 " << c << endl;
        }
    }

}
