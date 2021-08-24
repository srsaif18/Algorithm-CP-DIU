#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;

    string s, ss;

    cin >> s >> q;

    while (q--) {
        cin >> ss;

        int lo = INT_MAX, hi = 0;

        for (int i = 0, j = 0; s[i]; i++) {
            if (ss[j] == s[i]) {
                lo = min(lo, i);
                hi = max(hi, i);
                ss.erase(0, 1);
            }
        }

        if (ss.empty())
            cout << "Matched " << lo << " " << hi << endl;
        else
            cout << "Not matched" << endl;
    }

    return 0;
}
