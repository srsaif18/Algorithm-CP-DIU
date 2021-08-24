#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;

    int  rotation = 0, flag, difference;

    cin >> str;

    for(int i = 0, flag = 97; i < str.size(); i++) {
        difference = abs(flag - str[i]);

        if(difference > 13) {
            difference = 26 - difference;
        }

        rotation += difference;
        flag = str[i];
    }

    cout << rotation << endl;

    return 0;
}