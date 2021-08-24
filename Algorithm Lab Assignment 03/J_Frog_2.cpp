#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, K;

    cin >> N >> K;

    vector <int> h(N);

    for (int i = 0; i < N; i++)
        cin >> h[i];

    vector <long long> dp(N, 1 << 30);

    dp[0] = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 1; j <= K; j++) {
            if (i + j < N) {
                dp[i + j] = min(dp[i + j], dp[i] + abs(h[i] - h[i + j]));
            }
        }
    }

    cout << dp[N - 1] << endl;

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main(void)
// {
//     int n, k;

//     cin >> n >> k;

//     int h[n];
//     int i, j;

//     for (int i = 0; i < n; i++)
//         cin >> h[i];

//     long long tmp[n + 1];
//     tmp[0] = 0;

//     for (int i = 1; i <= n; i++)
//         tmp[i] = LLONG_MAX;

//     i = 1;

//     while (i < n)
//     {
//         j = 1;
//         while (j <= k && j <= i)
//         {
//             tmp[i] = min(tmp[i], tmp[i - j] + abs(h[i] - h[i - j]));
//             j++;
//         }
//         i++;
//     }

//     cout << tmp[n - 1] << endl;

//     return (0);
// }
