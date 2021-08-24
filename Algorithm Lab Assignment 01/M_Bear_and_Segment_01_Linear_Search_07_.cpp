#include <bits/stdc++.h>
using namespace std;

int main() {
    int testCase;

    cin >> testCase;

    while(testCase--) {
        string str;

        bool flag = 0;

        int i = 0;

        cin >> str;

        while(str[i] == '0') {
            i++;
        } 

        while(str[i] == '1') {
            i++;
            flag = 1;
        }

        while(str[i] == '0') {
            i++;
        }

        if(flag && (i == str.size())) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}