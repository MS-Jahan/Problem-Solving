#include <bits/stdc++.h>

using namespace std;

int main(){

    int k, q, r, b, kn, p;

    cin >> k >> q >> r >> b >> kn >> p;

    k = 1 - k;
    q = 1 - q;
    r = 2 - r;
    b = 2 - b;
    kn = 2 - kn;
    p = 8 - p;

    printf("%d %d %d %d %d %d\n", k, q, r, b, kn, p);


    return 0;
}

