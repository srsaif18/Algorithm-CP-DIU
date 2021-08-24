#include <bits/stdc++.h>
using namespace std;

int main() {

    int testCase;

    while (cin >> testCase) {
        cout << testCase * testCase + (testCase - 1) * (testCase - 1) << endl;
        //cout << 2 * testCase * (testCase - 1) + 1 << endl;
    }
    return 0;
}