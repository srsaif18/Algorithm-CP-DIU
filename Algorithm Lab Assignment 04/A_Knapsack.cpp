#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, W;

    cin >> n >> W;

    vector<long long> w(n), v(n);

    for (int i = 0; i < n; ++i)
        cin >> w[i] >> v[i];

    vector<long long> dp(W + 1, -1);

    dp[0] = 0;

    for (int i = 0; i < n; ++i)
        for (int j = W; j - w[i] >= 0; --j)
            if (dp[j - w[i]] >= 0)
                dp[j] = max(dp[j], dp[j - w[i]] + v[i]);

    long long m = 0;

    for (long long x : dp)
        m = max(m, x);

    cout << m << endl;

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main(void)
// {
//     int i, j, n, max_w;

//     cin >> n >> max_w;

//     int w[n], v[n];
//     long long tmp[n + 1][max_w + 1];

//     for (int i = 0; i < n; i++)
//         cin >> w[i] >> v[i];

//     for (int i = 0; i <= n; i++)
//         for (int j = 0; j <= max_w; j++)
//             tmp[i][j] = 0;

//     i = 1;

//     while (i <= n)
//     {
//         j = 1;
//         while (j <= max_w)
//         {
//             if (j >= w[i - 1])
//                 tmp[i][j] = max(tmp[i - 1][j], tmp[i - 1][j - w[i - 1]] + v[i - 1]);
//             tmp[i][j] = max(tmp[i][j], tmp[i - 1][j]);
//             j++;
//         }
//         i++;
//     }

//     cout << tmp[n][max_w] << endl;

//     return (0);
// }