#include <bits/stdc++.h>
using namespace std;

const int m = 100000007;

int dp[21][1001], coin[50], cnt[50];

int main() {
    int test, n, k, cs = 0;

    cin >> test;

    while (test--) {

        cin >> n >> k;

        for (int i = 0; i < n; i++)
            cin >> coin[i];
        for (int i = 0; i < n; i++)
            cin >> cnt[i];

        memset(dp, 0, sizeof dp);

        dp[0][0] = 1;

        for (int i = 0; i < n; i++) {
            for (int j = coin[i]; j <= k; j++) {
                for (int c = 1; c <= cnt[i]; c++) {
                    dp[c][j] += dp[c - 1][j - coin[i]];
                    if (dp[c][j] >= m)
                        dp[c][j] %= m;
                }
            }

            for (int j = coin[i]; j <= k; j++) {
                for (int c = 1; c <= cnt[i]; c++) {
                    dp[0][j] += dp[c][j];
                    if (dp[0][j] >= m)
                        dp[0][j] %= m;
                    dp[c][j] = 0;
                }
            }
        }

        cout << "Case " << ++cs << ": " << dp[0][k] << endl;
    }

    return 0;
}