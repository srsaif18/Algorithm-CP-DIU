#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, m, n, counter = 0;

    int A[10000];

    cin >> t;

    while (t--) {
        cin >> n >> m;

        int l, r;

        l = r = 0;

        for (int i = 1; i <= n; i++) {
            cin >> A[i];
            l = max(l, A[i]);
            r += A[i];
        }

        int k, now, mid;

        while (l <= r) {
            k = 1;
            now = 0;
            mid = (l + r) >> 1;
            
            for (int j = 1; j <= n; j++) {
                if (now + A[j] > mid)
                    k++, now = A[j];
                else
                    now += A[j];
            }

            if (k <= m)
                r = mid - 1;
            else
                l = mid + 1;
        }

        cout << "Case " << ++counter << ": " << l << endl;
    }

    return 0;
}