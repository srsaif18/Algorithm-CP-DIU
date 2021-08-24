#include "bits/stdc++.h"
using namespace std;

int main() {
    int n, i, j;

    cin >> n;

    int a[n], ans = n, k = n;

    for (i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n);

    if (n == 1)
        cout << 1;
    else {
        for (j = k / 2 - 1; j >= 0; j--) {
            if (a[j] * 2 <= a[n - 1]) {
                n--;
                ans--;
            } else {
                continue;
            }
        }
        cout << ans << endl;
    }

    return 0;
}