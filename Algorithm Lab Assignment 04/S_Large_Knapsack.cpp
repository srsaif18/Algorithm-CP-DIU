#include <bits/stdc++.h>
using namespace std;

int V[500], W[500], dp[2][2000010];

int main()
{
    int K, N;

    cin >> K >> N;

    for (int i = 0; i < N; i++)
        cin >> V[i] >> W[i];

    dp[0][0] = dp[1][0] = 0;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= K; j++)
        {
            if (W[i - 1] <= j)
                dp[(i & 1)][j] = max(dp[!(i & 1)][j], V[i - 1] + dp[!(i & 1)][j - W[i - 1]]);
            else
                dp[(i & 1)][j] = dp[!(i & 1)][j];
        }
    }

    cout << dp[N & 1][K];

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int value[500], weight[500], dp[2][2000010];

// void solve() 
// {
//     int k, n;

//     cin >> k >> n;

//     for (int i = 0; i < n; i++)
//         cin >> value[i] >> weight[i];

//     dp[0][0] = dp[1][0] = 0;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= k; j++)
//         {
//             if (weight[i - 1] <= j)
//                 dp[(i & 1)][j] = max(dp[!(i & 1)][j], value[i - 1] + dp[!(i & 1)][j - weight[i - 1]]);
//             else
//                 dp[(i & 1)][j] = dp[!(i & 1)][j];
//         }
//     }

//     cout << dp[n & 1][k];
// }

// int main(void)
// {
//     solve();

//     return (0);
// }