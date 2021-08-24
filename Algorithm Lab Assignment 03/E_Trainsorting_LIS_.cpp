#include <bits/stdc++.h>
using namespace std;

int a[2010], b[2010], c[2010];

int main() {
    int n;

    cin >> n;

    while (n--) {
        int n;

        cin >> n;

        for (int i = 0; i < n; i++)
            cin >> a[i];

        int ans = 0;

        for (int i = n - 1; i >= 0; i--) {
            b[i] = 1;
            c[i] = 1;

            for (int k = i + 1; k < n; k++) {
                if (a[i] < a[k])
                    b[i] = max(b[k] + 1, b[i]);

                if (a[i] > a[k])
                    c[i] = max(c[k] + 1, c[i]);
            }

            ans = max(ans, b[i] + c[i] - 1);
        }

        cout << ans << endl;
    }

    return 0;
}