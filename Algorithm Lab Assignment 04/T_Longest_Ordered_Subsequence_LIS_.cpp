//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int i, j, N, _max, ans;
int seq[1001], dp[1001];

int main() {
    cin >> N;
    ans = -1;

    for (int i = 0; i < N; i++) {
        cin >> seq[i];

        if (!i)
            dp[i] = 1;
        else {
            _max = 0;
            for (int j = i - 1; j >= 0; j--)
                if (seq[j] < seq[i] && dp[j] > _max)
                    _max = dp[j];

            dp[i] = _max + 1;
        }

        if (dp[i] > ans)
            ans = dp[i];
    }

    cout << ans << endl;

    return 0;
}