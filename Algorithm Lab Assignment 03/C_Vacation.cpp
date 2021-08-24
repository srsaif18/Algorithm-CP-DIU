#include <bits/stdc++.h>
using namespace std;

int n, a[100010], b[100010], c[100010], dp[100010][3];

int main() {
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }

    dp[0][0] = dp[0][1] = dp[0][2] = 0;

    for (int i = 1; i <= n; i++) {
        dp[i][0] = max(dp[i - 1][1] + a[i], dp[i - 1][2] + a[i]);
        dp[i][1] = max(dp[i - 1][0] + b[i], dp[i - 1][2] + b[i]);
        dp[i][2] = max(dp[i - 1][0] + c[i], dp[i - 1][1] + c[i]);
    }

    cout << max({dp[n][0], dp[n][1], dp[n][2]}) << endl;

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main(void)
// {
//     int n;
    
//     cin >> n;

//     int a[n + 1][3];
//     int i, j, k;
//     long long tmp[n + 1][3];

//     for (int i = 0; i <= n; i++)
//         for (j = 0; j < 3; j++)
//         {
//             if (i != n)
//                 cin >> a[i][j];
//             tmp[i][j] = 0;
//         }

//     i = 1;

//     while (i <= n)
//     {
//         j = 0;
//         while (j < 3)
//         {
//             k = 0;
//             while (k < 3)
//             {
//                 if (j != k)
//                     tmp[i][k] = max(tmp[i][k], tmp[i - 1][j] + a[i - 1][k]);
//                 k++;
//             }
//             j++;
//         }
//         i++;
//     }

//     long long max = 0;
//     for (i = 0; i < 3; i++)
//         if (max < tmp[n][i])
//             max = tmp[n][i];
//     cout << max << endl;

//     return (0);
// }
