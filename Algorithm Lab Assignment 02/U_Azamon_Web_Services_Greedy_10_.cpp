#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;

    cin >> t;

    while (t--) {
        string s, t;

        cin >> s >> t;

        for (int i = 0; i < s.length(); i++) {
            int x = i;

            for (int j = s.length() - 1; j > i; j--)
                if (s[j] < s[x])
                    x = j;

            if (x == i)
                continue;

            swap(s[x], s[i]);
            break;
        }

        cout << ((s < t) ? s : "---") << '\n';
    }

    return 0;
}
