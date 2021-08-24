#include <bits/stdc++.h>
using namespace std;

int t, n, people;
int price[1010];
int weight[1010];
int dp[1010][35];

int solve(int id, int w) {
    if (id >= n || w == 0)
        return 0;
    if (dp[id][w] != -1)
        return dp[id][w];
    if (weight[id] > w)
        return dp[id][w] = solve(id + 1, w);
    else
        return dp[id][w] = max(solve(id + 1, w),
                               price[id] + solve(id + 1, w - weight[id]));
}

int main() {
    cin >> t;

    while (t--) {
        memset(dp, -1, sizeof(dp));

        cin >> n;

        for (int i = 0; i < n; i++)
            cin >> price[i] >> weight[i];

        cin >> people;

        int ans = 0;
        int maxw;

        while (people--) {
            cin >> maxw;
            ans += solve(0, maxw);
        }
        cout << ans << endl;
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int p[1005], w[1005], dp[35];

// int main()
// {
//     int t, n, g, sum, maxw;

//     cin >> t;

//     while (t--)
//     {
//         cin >> n;

//         for (int i = 0; i < n; ++i)
//             cin >> p[i] >> w[i];

//         cin >> g;

//         sum = 0;

//         while (g--)
//         {
//             memset(dp, 0, sizeof(dp));

//             cin >> maxw;

//             for (int i = 0; i < n; ++i)
//                 for (int j = maxw; j >= w[i]; --j)
//                     dp[j] = max(dp[j], (dp[j - w[i]] + p[i]));
//             sum += dp[maxw];
//         }

//         cout << sum << endl;
//     }

//     return 0;
// }