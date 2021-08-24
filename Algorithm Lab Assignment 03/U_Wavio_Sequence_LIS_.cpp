#include <bits/stdc++.h>
using namespace std;

int a[10010], up[10010], down[10010], dp[10010];

int main() {
    int n;

    while (cin >> n) {
        int ans = 1;

        memset(a, 0, sizeof(a));

        for (int i = 0; i < n; i++)
            cin >> a[i];

        int cnt = 0;
        dp[0] = a[0];
        up[0] = 1;

        for (int i = 1; i < n; i++) {
            if (a[i] > dp[cnt])
                dp[++cnt] = a[i];

            if (a[i] < dp[cnt]) {
                int k = lower_bound(dp, dp + cnt + 1, a[i]) - dp;
                dp[k] = a[i];
            }

            up[i] = cnt + 1;
        }

        cnt = 0;

        memset(dp, 0, sizeof(dp));

        dp[0] = a[n - 1];
        down[n - 1] = 1;

        for (int i = n - 2; i >= 0; i--) {
            if (a[i] > dp[cnt])
                dp[++cnt] = a[i];

            if (a[i] < dp[cnt]) {
                int k = lower_bound(dp, dp + cnt + 1, a[i]) - dp;
                dp[k] = a[i];
            }

            down[i] = cnt + 1;
        }

        for (int i = 0; i < n; i++) {
            if (up[i] == down[i] && up[i] > ans)
                ans = up[i];
        }

        cout << 2 * (ans)-1 << endl;
    }

    return 0;
}