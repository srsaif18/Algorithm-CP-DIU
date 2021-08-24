// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string s, t;
//     cin >> s >> t;

//     int m = s.size();
//     int n = t.size();
//     int DP[m + 1][n + 1];

//     for (int i = 0; i <= m; i++)
//         for (int j = 0; j <= n; j++) {
//             if (i == 0 || j == 0)
//                 DP[i][j] = 0;
//             else if (s[i - 1] == t[j - 1])
//                 DP[i][j] = DP[i - 1][j - 1] + 1;
//             else
//                 DP[i][j] = max(DP[i - 1][j], DP[i][j - 1]);
//         }

//     int c = DP[m][n];
//     string S;
//     int x = m, y = n;

//     while (c) {
//         if (s[x - 1] == t[y - 1]) {
//             S = s[x - 1] + S;
//             x--;
//             y--;
//             c--;
//         }
//         else if (DP[x][y] == DP[x - 1][y])
//             x--;
//         else if (DP[x][y] == DP[x][y - 1])
//             y--;
//     }

//     cout << S << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int dp[3005][3005];

void input()
{
    char s[3005], t[3005];

    cin >> s >> t;

    int slen = strlen(s);
    int tlen = strlen(t);

    for (int i = 1; i <= slen; i++)
    {
        for (int j = 1; j <= tlen; j++)
        {
            if (s[i - 1] == t[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else
            {
                dp[i][j] = fmax(dp[i][j - 1], dp[i - 1][j]);
            }
        }
    }

    int cnt = dp[slen][tlen];
    char res[3010] = "";
    int i = slen;
    int j = tlen;

    while (cnt > 0)
    {
        if (s[i - 1] == t[j - 1])
        {
            res[cnt - 1] = s[i - 1];
            i--;
            j--;
            cnt--;
        }
        else if (dp[i][j] == dp[i - 1][j])
        {
            i--;
        }
        else
        {
            j--;
        }
    }

    cout << res << endl;
}

int main(void)
{
    input();

    return (0);
}
