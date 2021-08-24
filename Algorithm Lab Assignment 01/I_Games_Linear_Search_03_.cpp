#include <bits/stdc++.h>
using namespace std;

int main() {
    int testCase, counter = 0;

    cin >> testCase;

    int Home[testCase], Away[testCase];

    for(int i = 0; i < testCase; i++) {
        cin >> Home[i] >> Away[i];
    }
    
    for(int i = 0; i < testCase; i++) {
        for(int j = 0; j < testCase; j++) {
            if(Home[i] == Away[j]) {
                counter++;
            }
        }
    }

    cout << counter << endl;

    return 0;
}