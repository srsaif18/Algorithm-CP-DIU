#include <bits/stdc++.h>
using namespace std;

int n;
int h[100010], dp[100010];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    dp[0] = 0;
    dp[1] = abs(h[1] - h[0]);

    for (int i = 2; i < n; i++) {
        dp[i] = min(dp[i - 1] + abs(h[i] - h[i - 1]), dp[i - 2] + abs(h[i] - h[i - 2]));
    }

    cout << dp[n - 1] << endl;

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main(void)
// {
//     int n;

//     cin >> n;

//     int h[n];

//     for (int i = 0; i < n; i++)
//         cin >> h[i];

//     int tmp[n + 1];
//     tmp[0] = 0;
//     tmp[1] = abs(h[0] - h[1]);

//     int i = 2;

//     while (i <= n)
//     {
//         tmp[i] = min(tmp[i - 1] + abs(h[i] - h[i - 1]), tmp[i - 2] + abs(h[i] - h[i - 2]));
//         i++;
//     }

//     cout << tmp[n - 1] << endl;

//     return (0);
// }
