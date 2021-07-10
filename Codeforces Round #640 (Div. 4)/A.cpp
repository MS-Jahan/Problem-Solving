#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, counter = 0, temp_num, nums[6] = {0}, remainder, rescount = 0;

    cin >> num;

    temp_num = num;
    while(temp_num != 0){
        temp_num /= 10;
        counter++;
    }

    //temp_num = num;
    remainder = num;

    while(remainder > 0){
        cout << "powered: " << int(pow(10, counter-1)) << endl;
        remainder = remainder % int(pow(10, counter-1));
        cout << "Remainder: " << remainder << endl;
        nums[rescount] = num - remainder;
        rescount++;
        counter--;

    }

    cout << rescount << endl;
    for(int i = 0; i < rescount; i++){
        cout << nums[i];
        if(i < rescount-1){
            cout << " ";
        }
    }

    cout << endl;

    return 0;
}
