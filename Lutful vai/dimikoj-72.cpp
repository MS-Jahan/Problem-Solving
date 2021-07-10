#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, a, b, c;
    double s;

    cin >> n;

    for(int i = 0; i < n; i++){
        scanf("%d %d %d", &a, &b, &c);

        if((a < b+c) && (b < a+c) && (c < a+b)){
            s = (a+b+c)/2;
            s = sqrt(s * (s - a) * (s - b) * (s - c));
            printf("%0.2lf\n", s);
        }
        else{
            cout << "Oh, No!" << endl;
        }
    }


}
