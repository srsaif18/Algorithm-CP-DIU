#include <bits/stdc++.h>
using namespace std;

int main() {
    int iniPos, finalPos, testCase, time, count = 1;

    cin >> testCase;

    while (testCase--) {
        cin >> iniPos >> finalPos;

        if (finalPos >= iniPos) {
            time = 4 * finalPos + 19;
        }
        else {
            time = (2 * iniPos - finalPos) * 4 + 19;
        }

        cout << "Case " << count << ": " << time << endl;
        count++;
    }

    return 0;
}