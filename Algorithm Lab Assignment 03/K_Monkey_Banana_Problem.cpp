#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[310][310];
int dp[310][310];

int solve(int i, int j) {
    if (a[i][j] == 0)
        return 0;

    if (i == k - 1)
        return a[i][j];

    if (dp[i][j] != -1)
        return dp[i][j];

    int r1 = 0, r2 = 0;

    r1 = a[i][j] + solve(i + 1, j);
    r2 = a[i][j] + solve(i + 1, j + 1);

    dp[i][j] = max(r1, r2);

    return dp[i][j];
}

int main() {
    int t;

    cin >> t;

    for (int s = 1; s <= t; s++) {
        memset(dp, -1, sizeof(dp));
        memset(a, 0, sizeof(a));

        cin >> n;

        k = 2 * n - 1;

        for (int i = 0; i < n; i++)
            for (int j = 0; j <= i; j++)
                cin >> a[i][j];

        int l = 1;

        for (int i = n; i < k; i++) {
            for (int j = l; j < n; j++)
                cin >> a[i][j];

            l++;
        }

        cout << "Case " << s << ": " << solve(0, 0) << endl;
    }

    return 0;
}