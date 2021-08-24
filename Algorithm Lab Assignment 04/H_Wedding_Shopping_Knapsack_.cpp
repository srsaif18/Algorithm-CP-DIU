#include <bits/stdc++.h>
#define INF 0x3F3F3F3F
using namespace std;

int model[21][21];
bool mark[210][21];
int memo[210][21];
int K[21];
int M, C;

int dp(int money, int c) {
    if (money < 0)
        return -INF;

    if (c == M)
        return C - money;

    int &best = memo[money][c];
    
    if (mark[money][c])
        return best;

    mark[money][c] = true;

    int ans = -INF;

    for (int i = 0; i < K[c]; i++)
        ans = max(ans, dp(money - model[c][i], c + 1));

    return best = ans;
}

int main() {
    int t;

    cin >> t;

    while (t--) {
        memset(mark, false, sizeof(mark));

        cin >> C >> M;

        for (int i = 0; i < M; i++) {
            cin >> K[i];

            for (int j = 0; j < K[i]; j++)
                cin >> model[i][j];
        }

        int res = dp(C, 0);

        if (res == -INF)
            printf("no solution\n");
        else
            printf("%d\n", res);
    }

    return 0;
}