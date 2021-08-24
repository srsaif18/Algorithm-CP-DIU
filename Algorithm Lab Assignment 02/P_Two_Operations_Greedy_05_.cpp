#include <bits/stdc++.h>
using namespace std;

string str;
int cnt[30];

main() {
    cin >> str;

    int n = str.length();

    for (int i = 0; i < n; i++) {
        int c = (int)str[i];
        cnt[c]++;
    }

    for (int i = 97; i < 122; i++) {
        int o = cnt[i];

        cnt[i + 1] += o / 2;
        cnt[i] = o % 2;
    }

    for (int i = 122; i >= 97; i--) {
        for (int j = 0; j < cnt[i]; j++)
            cout << (char)i;
    }

    cout << endl;
}