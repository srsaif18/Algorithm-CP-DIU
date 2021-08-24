#include <bits/stdc++.h>
using namespace std;

int s[110], t[110];
int l[110][110];
int m, n;

int lcs() {
    for (int i = 0; i <= max(m, n); i++)
        l[0][i] = l[i][0] = 0;

    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++) {
            if (s[i - 1] == t[j - 1])
                l[i][j] = l[i - 1][j - 1] + 1;
            else
                l[i][j] = max(l[i - 1][j], l[i][j - 1]);
        }
    return l[m][n];
}

int main() {
    int cnt = 0;

    while (scanf("%d %d", &m, &n) == 2 && (m || n)) {
        for (int i = 0; i < m; i++)
            cin >> s[i];

        for (int i = 0; i < n; i++)
            cin >> t[i];

        cout << "Twin Towers #" << ++cnt << endl
             << "Number of Tiles : " << lcs() << endl
             << endl;
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int s[110], t[110];
// int l[110][110];
// int m, n;

// int lcs() {
//     for (int i = 0; i <= max(m, n); i++)
//         l[0][i] = l[i][0] = 0;

//     for (int i = 1; i <= m; i++)
//         for (int j = 1; j <= n; j++) {
//             if (s[i - 1] == t[j - 1])
//                 l[i][j] = l[i - 1][j - 1] + 1;
//             else
//                 l[i][j] = max(l[i - 1][j], l[i][j - 1]);
//         }

//     return l[m][n];
// }

// int main() {
//     int cs = 0;
//     while (cin >> m >> n) {
//         if (m == 0 && n == 0)
//             break;

//         for (int i = 0; i < m; i++)
//             cin >> s[i];

//         for (int i = 0; i < n; i++)
//             cin >> t[i];

//         cout << "Twin Towers #" << ++cs << endl
//              << "Number of Tiles : " << lcs() << endl
//              << endl;
//     }

//     return 0;
// }