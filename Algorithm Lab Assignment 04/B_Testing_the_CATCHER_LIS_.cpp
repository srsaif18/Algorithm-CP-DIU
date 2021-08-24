#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i, j, test = 0, a[1000];

    while (cin >> a[0]) {
        if (a[0] < 0)
            break;

        n = 1;

        while (cin >> a[n]) {
            if (a[n] < 0)
                break;
            else
                n++;
        }

        int dp[1000] = {};

        for (i = 0; i < n; i++)
            for (j = i + 1; j < n; j++) {
                if (a[j] < a[i] && dp[j] < dp[i] + 1)
                    dp[j] = dp[i] + 1;
            }

        int ans = 0;

        for (i = 0; i < n; i++)
            ans = max(ans, dp[i]);

        ans++;

        if (test)
            cout << endl;

       cout << "Test #" << ++test << ":" << endl 
            << "  maximum possible interceptions: " << ans << endl;
    }

    return 0;
}